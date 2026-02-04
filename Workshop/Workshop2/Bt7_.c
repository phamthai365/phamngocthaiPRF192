#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int k;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    k = sqrt(n);
    if (k * k == n) {
        printf("%d la so chinh phuong", n);
    } else {
        printf("%d khong phai la so chinh phuong", n);
    }
}