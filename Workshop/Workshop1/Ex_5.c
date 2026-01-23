#include<stdio.h>
int main(){
    float soKm; int soPhutcho;
     printf( "Nhap vao soKm: ");
     int kq = scanf ("%f",&soKm);
     if(kq!=1 || soKm<=0)
      {
	    printf( "Nhap sai!");
        return 0;
	    }
     printf( "Nhap vao so phut cho: ");
     kq = scanf ("%d",&soPhutcho) ;
     if(kq!=1 || soPhutcho<0)
     { 
	    printf( "Nhap sai!");
        return 0;
	    }
    float tongTien;
    if(soKm<0.5)
        tongTien = 12000;
    else
        if(soKm <=30)
           tongTien = 12000 + (soKm-0.5)*15000;
    else
           tongTien = 12000 + 29.5*15000+ (soKm-30)*12000;
    if(soPhutcho>5)
       tongTien = tongTien + (soPhutcho-5)*1000; //hoặc tongTien += (soPhutcho-5) *1000;
    printf("%-10s %-20s %-20s\n", "So km", "So Phut cho", "tong Tien");
    printf("%-10.1f %-20d %-20.0f",soKm,soPhutcho,tongTien);
}
 