#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f0 = 1, f1 = 1, fn, max;
	printf("\nNhap so max = ");
	scanf("%d", &max);
	f0 = 1;
	f1 = 1;
	
	printf("\n%d, %d, ", f0, f1);
	fn = f0 + f1;
	while(fn <= max) {
		printf("%d, ", fn);
		
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	return 0;
	}
