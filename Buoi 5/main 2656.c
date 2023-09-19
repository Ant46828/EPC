#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int N,S;
printf("Nhap so nguyen N:");
scanf("%d",N);
S=N*(N+1)/2;
printf("Tong cac so tu 1 den N la: %d",S);

int i,n;
printf("\nNhap n:");
scanf("%d",&n);
for (i=1;i<=n;i++){
    if(n%i==0)
    printf("\nUoc cua n la:%d ", i);
    }

int num,j;
printf("\nNhap vao so nguyen num:");
scanf("%d",num); 
for(i=1;i<=num;i++){
	for(j=0;j<num;j++) {
		printf("%d * %d = %d",num ,i ,num*i);
	} 
}
return 0;
}
