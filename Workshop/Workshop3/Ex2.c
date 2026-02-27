int main() {
    int n;
    int sum = 0;
    printf("Nhap cac so nguyen duong (nhap 0 de dung):\n");
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
        if (n > 0) {
            sum += n;
        } else if (n < 0) {
            printf("Chi nhap so nguyen duong!\n");
        }
    } while (n != 0); // lap den khi nhap 0
    printf("Tong = %d\n", sum);
}