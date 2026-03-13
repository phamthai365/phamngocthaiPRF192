#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define ROWS 2
#define COLS 3

void findRowMin(int matrix[ROWS][COLS], int result[ROWS]) {
    // Your logic here
    for(int i = 0; i < ROWS; i++){
        result[i] = matrix[i][0];

        for(int j = 1; j < COLS; j++){
            if(matrix[i][j] < result[i]){
                result[i] = matrix[i][j];
            }
        }
    }
}

void displayResults(int result[ROWS]) {
    for(int i = 0; i < ROWS; i++){
        printf("%d\n", result[i]);
    }
}

int main() {
    system("cls");
    printf("INPUT:\n");

    int matrix[ROWS][COLS];
    int result[ROWS];

    // INPUT
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    findRowMin(matrix,result);

    printf("\nOUTPUT:\n");

    displayResults(result);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}