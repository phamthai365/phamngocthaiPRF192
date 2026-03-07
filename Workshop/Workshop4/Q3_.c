#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input");
        return 0;
    }

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int b[n],k=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b[k++]=a[i];
        }
    }

    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(b[i]<b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");

    for(int i=0;i<k;i++){
        printf("%d\n",b[i]);
    }

    //---FIXED PART - DO NOT EDIT ANY THINGS HERE
    system("pause");
    return(0);
}