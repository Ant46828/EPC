#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char str[100000]; 
int length; 
printf ("Nhap vao chuoi :");
gets(str);
length = strlen(str);
printf ("\nDo dai cua chuoi la :%d",length); 

char s1[100000];
char s2[100000];
printf ("\nNhap vao chuoi s1:"); 
scanf ("%s",&s1);
printf ("\nNhap vao chuoi s2:"); 
scanf ("%s",&s2);
strcat (s1,s2);
printf ("\nChuoi sau khi noi s2 vao s1 la: %s",s1); 

char string[100000];
int i;
printf("\nNhap vao mot chuoi:");
scanf("%c",&string);
gets(string);
for (i=0;string[i] != '\0';i++) {
	printf("%c\n",string[i]);
}
	return 0;
}
