#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int chieudai, chieurong; 
int chu_vi_hcn, dien_tich_hcn; 
printf ("Nhap chieu dai hinh chu nhat:");
scanf ("%d",&chieudai);
printf ("Nhap chieu rong hinh chu nhat:");
scanf ("%d",&chieurong); 
chu_vi_hcn = 2*(chieudai+chieurong);
dien_tich_hcn = chieudai * chieurong;
printf ("chu vi = %d", chu_vi_hcn);
printf ("\n dien tich = %d", dien_tich_hcn); 
 
float  r,c,S;
printf ("\nNhap ban kinh hinh tron:");
scanf ("%f", &r);
c = 2*3.14*r ;
S  = 3.14*r*r;
printf ("\nchu_vi=%f", c);
printf ("\n dien tich=%f", S); 







	return 0;
}
