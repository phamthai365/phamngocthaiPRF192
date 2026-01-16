#include <stdio.h>
int main(){
	float x, phan_thuc;
	int phan_nguyen;

	printf("Nhap so thuc");
	scanf("%f" ,&x);
	
	phan_nguyen = (int) x;
	phan_thuc = x - phan_nguyen;
	
	printf("Gia tri da nhap: %.4f\n", x);
	printf("In phan nguyen la: %d\n", phan_nguyen);
	printf("Phan thuc la: %.4f", phan_thuc);	
}