#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n;
printf ("Nhap vao so n:");
scanf ("%d", &n); 
if (n%2==0) {
	printf ("n la so chan");
}	else printf ("n la so le");  

int n2;
printf ("\nNhap vao so n2:");
scanf ("%d", &n2);
if (n2%7==0){
	if (n2%2==0){
		printf ("\nn2 chia het cho 2 va 7"); 
	} else printf ("\nn2 khong chia het cho 2 va 7"); 
} else printf ("\nn2 khong chia het cho 2 va 7");
 
int n3,i;
printf ("\nNhap vao so n3:");
scanf ("%d", &n3);
if (n3<2) {
	printf ("\n n3 khong phai so nguyen to"); 
	return 0;
} 
for (i=2;i<n3-1;++i) {
	if (n3 % i == 0) {
		printf ("\nn3 khong phai la so nguyen to"); 
	return 0; 
	} 
}
printf ("\nn3 la so nguyen to"); 
	return 0;
}


