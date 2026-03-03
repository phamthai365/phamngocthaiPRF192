#include <stdio.h>
void show_menu() {
    printf("\n===== MAY TINH BO TUI =====\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("0. Thoat\n");
    printf("===========================\n");
}
void processor() {
    int choice;
    float a, b;
    do {
        show_menu();
        printf("Chon phep tinh: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Da thoat chuong trinh.\n");
            break;
        }
        printf("Nhap so thu nhat: ");
        scanf("%f", &a);
        printf("Nhap so thu hai: ");
        scanf("%f", &b);
        switch (choice) {
            case 1:
                printf("Ket qua: %.2f\n", a + b);
                break;
            case 2:
                printf("Ket qua: %.2f\n", a - b);
                break;
            case 3:
                printf("Ket qua: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Loi: Khong the chia cho 0!\n");
                else
                    printf("Ket qua: %.2f\n", a / b);
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (1);
}
int main() {
    processor();
    return 0;
}