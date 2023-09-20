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

int num;
    printf("\nNhap vao mot so: ");
    scanf("%d", &num);

    printf("Bang cuu chuong %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
return 0;
}
