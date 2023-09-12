#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
printf ("Nhap gia tri a =");
int a; 
scanf("%d", &a);
printf ("\na^2=%d", a*a);
printf ("\na^3=%d", a*a*a); 
printf ("\na^4=%d", a*a*a*a); 

int dd, mm, yyyy; 
printf ("\nNhap ngay:");
scanf("%d",&dd);
printf ("Nhap thang:");
scanf("%d",&mm); 
printf ("Nhap nam:"); 
scanf("%d",&yyyy); 
printf ("%02d/%02d/%02d",dd,mm,yyyy); 

float b,c,tong,hieu,nhan,chia;
printf ("\nNhap gia tri b=");
scanf ("%f",&b);
printf ("\nNhap gia tri c=");
scanf ("%f",&c);
tong = b+c;
hieu = b-c;
nhan = b*c;
chia = b/c;
printf ("\ntong = %f ", tong);
printf ("\nhieu = %f ", hieu);
printf ("\nnhan = %f ", nhan);
printf ("\nchia = %f ", chia);
	return 0;
}
