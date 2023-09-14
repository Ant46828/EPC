#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//float n,i,S;
//i=1;
//printf ("Nhap n:");
//scanf ("%f", &n); 
//while (i<=n) {
//	S=S+i;
//	i++; 
//}
// printf ("Tong 1+2+3+...+%f la %f:",n,S); 
	
//float n,i,S;
//i=1;
//printf ("Nhap n:");
//scanf ("%f", &n); 
//while (i<=n) {
//	S=S+i*i;
//	i++; 
//}
//printf ("Tong 1^2 + 2^2 + 3^2 +...+ %f la %f:", n,S);
	
//float n,i,S;
//i=1;
//printf ("Nhap n:");
//scanf ("%f", &n); 
//while (i<=n) {
//	S=S+1/i;
//	i++; 
//}
//printf ("Tong 1+ 1/2 + 1/3 +... + 1/%f la %f",n,S);
	
//float n,i,S;
//i=1;
//printf ("Nhap n:");
//scanf ("%f", &n); 
//while (i<=n) {0
//	S=S+1/(i*2);
//	i++; 
//}
//printf ("Tong 1/2 + 1/4 +... + 1/%f*2 la %f",n,S);
	
float n,i,S;
i=0;
printf ("Nhap n:");
scanf ("%f", &n); 
while (i<=n) {
	S=S+1/(2*i+1);
	i++; 
}
printf ("Tong 1 + 1/3 + 1/5 +... + 1/((%f*2)+1) la %f",n ,S);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
