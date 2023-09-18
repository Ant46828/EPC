#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int t[10];
int i;
for (i=0;i<10;i++){
	printf ("\nt[%d]=",i);
	scanf ("%d",&t[i]); 
} 
int tong=0;
for (i=0;i<10;i++) {
	tong += t[i];
}
printf("\nTong cac phan tu trong mang la:%d",tong);

int sum=0;
for (i=0;i<10;i++) {
	if (t[i] % 3 == 0) {
		if (t[i] % 6 ==0){
			sum += t[i];
		}
	}
}
printf ("\nTong cac phan tu trong mang chia het cho 3 va 6 la:%d", sum);

int S=0;
for (i=0;i<10;i++) {
	if (t[i] % 3 == 0) {
		if (t[i] % 7 ==0){
			S += t[i];
		}
	}
}
printf ("\nTong cac phan tu trong mang chia het cho 3 va 7 la:%d", S);
	return 0;
}
