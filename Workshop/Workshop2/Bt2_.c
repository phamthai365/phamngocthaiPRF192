#include<stdio.h>
#include<math.h>
int main() {
    int n;
    int count = 0;
    while (1) {
        if (count == 5)
            break;
        printf("Nhap so thu %d (0 < n <= 1000): ", count + 1);
        while (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
            printf("Nhap sai! Nhap lai (0 < n <= 1000): ");
            fflush(stdin);
        }
        printf("Can bac 2 cua %d la: %.2f\n\n", n, sqrt(n));
        count++;
    }
}