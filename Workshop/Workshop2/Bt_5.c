#include <stdio.h>
int main() {
    int n;
    int tong = 0;
    printf("Nhap cac so nguyen duong (nhap 0 de dung):\n");
    scanf("%d", &n);
    while (n != 0) {
        if (n > 0) {
            tong = tong + n;
        }
        scanf("%d", &n);
    }
    printf("Tong cac so nguyen duong da nhap la: %d", tong);
    return 0;
}