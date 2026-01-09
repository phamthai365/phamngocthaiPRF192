#include<stdio.h>
int main(){
	//Khai báo 1 biến số thực a, b, khởi tạo giá trị
	float a = 5, b = 10.216;
	//Khai báo biến kq, là kết quả của a+b
	float kq = a+b;
	//In a: a=5
	printf("a=%.0f\n",a);
	//In b: b=10.216
	printf("b=%3f\n,b");
	//In kết quả: 5 + 10.216 = 15.22
	printf ("%.0f + %3f = %2f",a,b,kq);
}