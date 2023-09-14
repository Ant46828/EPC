#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float a,b;
printf ("Nhap a:");
scanf ("%f", &a);
printf ("Nhap b:");
scanf ("%f", &b);
if (a==0) {
	if (b==0) {
		printf ("Phuong trinh co vo so nghiem"); 
	} else { 
	    printf ("Phuong trinh vo nghiem"); 
	} }else {
		printf ("Phuong trinh co nghiem x=%f",-b/a);
} 











	return 0;
}
