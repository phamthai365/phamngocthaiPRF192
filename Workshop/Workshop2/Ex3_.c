#include <stdio.h>

int main() {
    int n, i;

    do {
        printf("Nhap n (n >= 1): ");
        scanf("%d", &n);
    } while (n < 1);

    printf("Bang cuu chuong 5 tu 1 den %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}