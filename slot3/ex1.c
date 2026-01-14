//1.Khai bao và khởi tạo giá trị cho 2 số a,b số nguyên
//2.Khai bao biến kq
//Hãy in kết quả: +, -, *, / của a,b
#include<stdio.h>
int main(){
	int a = 7;
    int b = 2;
    float kq;
// Phép cộng
kq = a + b;
printf("%d + %d = %.0f\n",a,b,kq);
// Phép trừ
kq = a - b;
printf("%d - %d = %.0f\n",a,b,kq);
// Phép nhân
kq = a * b;
printf("%d * %d = %.0f\n",a,b,kq);
// Phép chia
kq = (float)a/b;
printf("%d / %d = %.2f\n",a,b,kq);
return 0;    
}