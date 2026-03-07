#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

    int n,i,j;
    scanf("%d",&n);

    int a[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");

    int found = 0;

    for(i=0;i<n;i++){
        if(a[i] % 2 == 0){

            int check = 0;
            for(j=0;j<i;j++){
                if(a[i] == a[j]){
                    check = 1;
                    break;
                }
            }

            if(check == 0){
                int count = 0;
                for(j=0;j<n;j++){
                    if(a[j] == a[i]){
                        count++;
                    }
                }
                printf("%d-%d\n",count,a[i]);
                found = 1;
            }
        }
    }

    if(found == 0){
        printf("Not found\n");
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    system("pause");
    return(0);
}