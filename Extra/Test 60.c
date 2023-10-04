#include <stdio.h>
#include <stdlib.h>

void printPrime(int n, int m) {
	printf ("Prime numbers between %d and %d are:",n,m);
	int i; 
	for (i=n;i<=m;i++) {
		if (isPrime(i)){
			printf("%d",i);
		}
	}
	printf ("\n");
}

int isPrime(int number) {
	int i; 
	printf("Input a number:");
	scanf("%d",&number);
	if (number < 2 ) {
		printf("\n%d is not a prime",number);
		return 0; 
	} else {
	 for (i=2;i<number-1;++i) {
	 	if(number % i == 0) {
	 	printf("\n%d is not a prime",number);
		return 0; 
	 	} 
	 } 
	} 
	printf("\n%d is a prime",number);
		return 1; 
}
int main(int argc, char *argv[]) {
int n,m;
printf("Enter the range (n and m):");
scanf("%d %d",&n,&m);
printPrime(n,m);
return 0; 
}

