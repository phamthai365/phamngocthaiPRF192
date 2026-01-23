#include<stdio.h>
#include<math.h>
 int main(){
 	float cc, gk , ck , tong;
 	char grade;
 	printf("Nhap diem chuyen can:");
 	scanf("%f", &cc);
 	printf("Nhap diem giua ky:");
 	scanf("%f", &gk);
 	printf("Nhap diem cuoi ky:");
 	scanf("%f", &ck);
 	tong = cc*0.1 + gk*0.3 + ck*0.6;
 	printf("Diem tong ket: %.2f\n",tong);
// Xep loai 
    if (tong >= 8.5) grade = 'A';
	else
	    if(tong >=7.0) grade = 'B';
    else
        if(tong >=5.5) grade = 'C';
    else
	    if(tong >=4.0) grade = 'D';
	else grade = 'F';
	printf("Diem chu: %c\n",grade);
// Xep tot nghiep
    if(cc >=4 && gk >=4 && ck >=4 && grade != 'F'){
    	printf("Du dieu kien tot nghiep\n");	
  } else {
  	    printf("Khong du dieu kien tot nghiep\n");
  }
}		    