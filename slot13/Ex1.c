#include<stdio.h>
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
void inputArr(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void outputArr(int a[],int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
// ĐỔI sang dùng con trỏ
int isPrime(int *n){
	if(*n < 2) return 0;
	for(int i = 2; i * i <= *n; i++){
		if(*n % i == 0)
			return 0;
	}
	return 1;
}
int countPrimes(int a[],int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(isPrime(&a[i]))   // truyền địa chỉ
			count++;
	}
	return count;
}
int main(){
	int x = 10;
	doubleX2(&x);
	printf("Gia tri x= %d\n", x);
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[100];
	inputArr(a, n);
	printf("Mang vua nhap: ");
	outputArr(a, n);
	printf("\nSo luong so nguyen to: %d", countPrimes(a,n));
	return 0;
}