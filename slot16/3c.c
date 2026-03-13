//Nhap 1 mang in ra mang dao nguoc
#include <stdio.h>

int main() {
    int n, i;
    int a[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Mang dao nguoc:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}