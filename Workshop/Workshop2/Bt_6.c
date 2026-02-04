#include <stdio.h>
int main() {
    int n;
    int binary[32];
    int i = 0;
    printf("Nhap so thap phan: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("So nhi phan: 0");
        return 0;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("So nhi phan: ");
    while (i > 0) {
        i--;
        printf("%d", binary[i]);
    }
}