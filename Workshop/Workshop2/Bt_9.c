#include <stdio.h>
int main(){
    int may = 60;   // so bi mat (co dinh)
    int doan;
    printf("Doan so tu 1 den 100\n");
    printf("Nhap so ban doan: ");
    scanf("%d", &doan);
    while (doan!= may){
        if (doan > may){
            printf("Nho hon\n");
        } else {
            printf("Lon hon\n");
        }
        printf("Nhap lai: ");
        scanf("%d", &doan);
    }
    printf("Ban da doan dung!");
}