#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char rollno[16];
int age;
char name[50];
char address[200];
printf ("Nhap MaSV:");
fflush(stdin);fflush(stdout);
scanf ("%s", rollno);

printf ("\nNhap tuoi:");
fflush(stdin);fflush(stdout);
scanf ("%d",&age);

printf ("\nNhap ten:");
fflush(stdin);fflush(stdout);
scanf ("%s", name);

printf ("\nNhap dia chi:");
fflush(stdin);fflush(stdout);
scanf ("%s", address);

printf ("\nMa SV: %s,Tuoi: %d,Ten: %s, Dia chi: %s ", rollno, age, name, address); 
printf("\n=====================================================");
printf("\n |Ten      |Tuoi     |Ma SV     |Dia chi    |");
printf("\n=====================================================");
printf ("\n%s      |%d     |%s     |%s    |", name, age, rollno, address);
printf("\n=====================================================");
























	return 0;
}
