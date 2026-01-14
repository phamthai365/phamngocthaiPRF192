//1.Khai bao và khởi tạo giá trị cho 2 số a,b số nguyên
//2.Khai bao biến kq
//Hãy in kết quả: +, -, *, / của a,b
#include<stdio.h>
int main(){
	int a = 7;
    int b = 2;
    int kq;
// Phép cộng
kq = a + b;
printf("a + b = %d\n",kq);
// Phép trừ
kq = a - b;
printf("a - b = %d\n",kq);
// Phép nhân
kq = a * b;
printf("a * b = %d\n",kq);
// Phép chia
float chia = (float) a / b;
printf("a / b = %.2f\n",chia);
return 0;    
}