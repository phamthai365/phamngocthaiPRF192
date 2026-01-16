#include <stdio.h>
int main(){
    int a,b;
    printf("Nhap a,b:");
    scanf("%d,%d",&a,&b);
    printf("Nhap phep toan: ");
    char pt;
    fflush(stdin);
    scanf("%c",&pt);
    if(b==0)
     printf("Khong the chia cho 0");
    else
        {
            float kq = (float)a/b;
            printf("Ket qua: %d %c %d = %.2f",a,pt,b,kq);
        }
}