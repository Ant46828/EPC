#include <stdio.h>
#include <stdlib.h>
int N,i;
typedef struct sinhvien {
    char name[50];
    char rollno[20];
    int age;
};
void showMenu() {
	printf("\n1. Nhap thong tin sinh vien");
	printf("\n2. Hien thi thong tin sinh vien");
	printf("\n3. Sap xep theo thu tu A-Z");
	printf("\n4. Thoat");
	printf("\n Chon:");
} 
void input() {
	printf("Nhap so sinh vien: ");
    scanf("%d", &N);

    struct sinhvien sv[N];

    for (i = 0; i < N; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", (i + 1));
        printf("Ho va ten: ");
        fflush(stdin);
        fgets(sv[i].name, 50, stdin);
        printf("Ma sinh vien: ");
        fflush(stdin);
        fgets(sv[i].rollno, 20, stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
    }
}
 
void display() {
	printf("\nDanh sach sinh vien\n");
	for(i=0;i<N;i++) {
		printf("%c",sinhvien sv[N]); 
	} 
	
}

int main() {


    return 0;
}
