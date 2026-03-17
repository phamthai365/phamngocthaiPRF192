#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;
    int palindrome = 1;

    printf("INPUT:\n");
    scanf("%s", str);

    // Tính độ dài chuỗi (không dùng strlen)
    while (str[length] != '\0') {
        length++;
    }

    // Kiểm tra palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    printf("\nOUTPUT:\n");

    if (palindrome)
        printf("Yes");
    else
        printf("No");

    return 0;
}