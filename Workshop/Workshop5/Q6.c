#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char names[10][100], temp[100];

    printf("INPUT:\n");
    scanf("%d", &n);
    getchar();  

    for(i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);

        int k = 0;
        while(names[i][k] != '\0') {
            if(names[i][k] == '\n') {
                names[i][k] = '\0';
                break;
            }
            k++;
        }
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nOUTPUT:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}