#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

void findRowSum(int matrix[ROWS][COLS], int result[ROWS]) {
    int i, j;
    
    for(i = 0; i < ROWS; i++){
        result[i] = 0;
        for(j = 0; j < COLS; j++){
            result[i] += matrix[i][j];
        }
    }
}

void displayResults(int result[ROWS]) {
    int i;
    
    printf("OUTPUT:\n");
    for(i = 0; i < ROWS; i++){
        printf("%d\n", result[i]);
    }
}

int main() {
    system("cls");
    printf("INPUT:\n");
    
    int matrix[ROWS][COLS];
    int result[ROWS];
    int i,j;

    // INPUT - @STUDENT
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    findRowSum(matrix,result);

    // OUTPUT
    displayResults(result);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}