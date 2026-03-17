#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Nhập chuỗi
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);

    // Duyệt từng ký tự cho đến khi gặp '\0'
    while (str[count] != '\0') {
        count++;
    }

    // Nếu ký tự cuối là '\n' thì không tính
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    // In kết quả
    printf("\nOUTPUT:\n");
    printf("%d", count);

    return 0;
}