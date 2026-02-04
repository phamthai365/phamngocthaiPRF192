#include <stdio.h>
#include <math.h>
int main() {
    int n;
    while (1) {
        printf("Nhap n (0 < n <= 1000): ");
        if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
            printf("Nhap sai! Vui long nhap lai.\n");
            fflush(stdin); // Xóa bộ đệm
        } else {
            break;
        }
    }
    printf("Can bac 2 cua %d la: %.2f", n, sqrt(n));
}