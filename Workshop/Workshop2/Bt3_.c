#include <stdio.h>
int main(){
    int n;
    int i = 1;
    printf("Nhap n (1 <= n <= 10): ");
    scanf("%d", &n);
    while (n < 1 || n > 10) {
        printf("Nhap lai n (1 <= n <= 10): ");
        scanf("%d", &n);
    }
    printf("Cac so tu 1 den %d:\n", n);
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n\nBang cuu chuong cua %d:\n", n);
    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}