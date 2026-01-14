//2. khai bao bien kí tự tên kt, khởi gán giá trị cho
//biến này
//In ra: giá trị của biến:
//Giá trị thập phân, giá trị hex, giá trị octal
//Kích thước kiểu dữ Liệu của biến kt
#include<stdio.h>
int main(){
	char kt = 'A';
	printf("Gia tri ky tu: %c/n",kt);
	printf("Gia tri thap phan: %d\n", kt);
	printf("Gia tri he hex: %X\n",kt);
	printf("Gia tri he octal: %o\n",kt);
	printf("Kich thuoc bien kt:%zu byte\n",sizeof(kt));
	return 0;
}