#include <stdio.h>
int main(){
    int soDu = 1000000;   // so du ban dau
    int rutTien;
    printf("So du ban dau: %d\n", soDu);
    printf("Nhap so tien muon rut (nhap 0 de thoat): ");
    scanf("%d", &rutTien);
    while (rutTien != 0) {
        if (rutTien > soDu) {
            printf("So du khong du!\n");
            break;
        } else {
            soDu = soDu - rutTien;
            printf("Rut tien thanh cong.\n");
            printf("So du con lai: %d\n", soDu);
        }
        printf("Nhap so tien muon rut (nhap 0 de thoat): ");
        scanf("%d", &rutTien);
    }
    printf("Thoat ATM.");
}