#include <stdio.h>
#include <math.h>

int main() {
    float n;
    int count = 0;

    while (1) { // Vòng lặp vô hạn
        if (count == 5) {
            break; // Thoát vòng lặp khi đã nhập đủ 5 số
        }

        printf("Nhap vao n: ");
        while (scanf("%f", &n) != 1 || n <= 0 || n > 1000) {
            printf("Nhap lai n: ");
            fflush(stdin); // C1: Xóa vùng đệm
            // while(getchar() != '\n'); // C2: Cách an toàn hơn
        }

        printf("Can bac 2 la: %.2f\n", sqrt(n));
        count++;
    }

    printf("\nDa xong, xuat sac");
}
