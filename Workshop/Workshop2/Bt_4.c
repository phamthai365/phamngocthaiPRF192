#include <stdio.h>
int main() {
    int n;
    int dao = 0;
    int chuSo;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while (n > 0) {
        chuSo = n % 10;
        dao = dao * 10 + chuSo;
        n = n / 10;
    }
    printf("So dao nguoc la: %d", dao);
}