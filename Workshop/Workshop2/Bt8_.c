#include <stdio.h>
int main() {
    int a, b;
    int r;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("UCLN la: %d", a);
}