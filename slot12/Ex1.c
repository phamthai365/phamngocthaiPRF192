#include <stdio.h>
int tongUoc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong uoc sp cua %d la: %d", n, tongUoc(n));
    return 0;
}