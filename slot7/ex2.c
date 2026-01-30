#include <stdio.h>
int main() {
    int a, b;
    char op;

    // Nhập a và b
    scanf("%d,%d", &a, &b);
    // Nhập phép toán
    scanf(" %c", &op);

    if ((op == '/' || op == '%') && b == 0) {
        printf("Không thể chia cho 0");
        return 0;
    }

    switch (op) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %.2f", a, b, (float)a / b);
            break;
        case '%':
        	if (b ==0)
              printf("Khong the chia cho 0");
            else 
              printf("%d %% %d = %d", a, b, a % b);
        default:
            printf("Phép toán không hợp lệ");
    }

    return 0;
}