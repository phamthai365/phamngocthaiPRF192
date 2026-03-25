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

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c", '0'+j);
        }
        printf("\n");
    }
    if(n == 0)
    printf("Invalid input");

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}