#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, length = 0;

    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);

    // Tính độ dài chuỗi (không dùng strlen)
    while (str[length] != '\0') {
        length++;
    }

    // Nếu có ký tự xuống dòng thì bỏ đi
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("\nOUTPUT:\n");

    // In chuỗi ngược
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}