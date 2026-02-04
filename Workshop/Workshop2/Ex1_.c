#include <stdio.h>
#include<math.h>
int main(){
	/*Cách 1: de nhat, khong kiem tra loi khi nhap sai-nhap chu
	float n;
	printf("Nhap vao n:");
	int kq= scanf("%f",&n);
	scanf("%f",&n);
	while(kq!=1 || n<=0 || n>=1000){
		printf("Nhap vào n:");
		scanf("%f",&n);
	}
	printf("Can bac 2 la: %.2f",sqrt(n));
	*/
	//Cach 2:
	float n;
	printf("Nhap vao n:");
	while(scanf("%f",&n)!=1 || n <=0 || n>1000){
		printf("Nhap lai n:");
		//fflush(stdin);//C1: Xoa vung dem
		//while(getchar()!='\n');//C2.
	}
	printf("Can bac 2 la: %.2f",sqrt(n));
	
}