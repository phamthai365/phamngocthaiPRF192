#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    if(n < 2) return 0;

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Function to display prime numbers
void displayPrime(int arr[], int size){
    int found = 0;

    for(int i = 0; i < size; i++){
        if(isPrime(arr[i])){
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(found == 0){
        printf("Not found");
    }
}

int main() {
    system("cls");

    printf("INPUT:\n");

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nOUTPUT:\n");

    displayPrime(a,n);

    printf("\n");
    system("pause");
    return 0;
}