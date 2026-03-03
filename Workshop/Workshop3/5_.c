#include <stdio.h>
// Hàm kiểm tra số nguyên tố
int is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Cac so nguyen to trong khoang [%d, %d]:\n", a, b);
    for (int i = a; i <= b; i++) {
        // Bỏ qua số chẵn (trừ số 2)
        if (i % 2 == 0 && i != 2)
            continue;
        if (is_prime(i))
            printf("%d ", i);
    }
    return 0;
}