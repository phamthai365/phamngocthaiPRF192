#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int digits = 0, letters = 0, others = 0;

    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        }
        else if (str[i] != '\n') {
            others++;
        }
        i++;
    }

    printf("\nOUTPUT:\n");
    printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d", others);

    return 0;
}