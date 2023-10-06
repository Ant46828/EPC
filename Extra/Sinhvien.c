#include <stdio.h>
#include <stdlib.h>

typedef struct student_st {
	char name[30]; 
	char province[30];
	int year;
} Student; 
Student studentList[3];

void showMenu() {
	printf("1. Nhap vao du lieu cua sinh vien\n");
	printf("2. Sap xep, hien thi thong tin cua tung sinh vien theo thu tu tang dan cua ho ten\n");
	printf("3. Tim sinh vien co tuoi nho nhat\n");
	printf("4. Tim sinh vien theo tinh\n");
	printf("5. Luu thong tin vao file student.txt\n");
	printf("6. Thoat\n");
	printf("Chon:");
}

void input() {
	int i;
	for (i=0;i<3;i++) {
		printf("\nNhap thong tin cua sinh vien thu %d",i+1);
		printf("\nNhap ten cua sinh vien:");
//		fflush(stdin);fflush(stdout);
		gets(studentList[i].name);
		printf("\nNhap tinh:");
//		fflush(stdin);fflush(stdout);
		gets(studentList[i].province);
		printf("\nNhap nam sinh:");
		scanf("%d",&studentList[i].year);
	}
}

void display() {
	int i,j,cmp;
	Student tmp;
	for (i=0;i<2;i++) {
		for (j=i+1;j<3;j++) {
			cmp=strcmp(studentList[i].name, studentList[j].name);
			if (cmp>0) {
				tmp = studentList[i];
				studentList[i]=studentList[j];
				studentList[j]=tmp; 
			}
		}
	}
	for(i=0;i<3;i++) {
		printf("\nSinh vien %d",i+1);
		printf("\nHo ten: %s",studentList[i].name);
		printf("\nTinh thanh: %s",studentList[i].province);
		printf("\nNam sinh: %d\n",studentList[i].year);
	} 
}

void findmin(struct student_st studentList[], int size) {
int min,minIndex,i;
min=studentList[0].year;
minIndex=0;
	for (i=0;i<size;i++) {
		if(studentList[i].year > min ) {
			min = studentList[i].year;
			minIndex=i;
		} 
	} 
	    printf("\nSinh vien nho tuoi nhat la:");
		printf("\nHo ten: %s",studentList[minIndex].name);
		printf("\nTinh thanh: %s",studentList[minIndex].province);
		printf("\nNam sinh: %d\n",studentList[minIndex].year);
} 

void findprovince(struct student_st studentList[]) {
	char s[50];
	printf("Nhap ten tinh thanh can tim:");
	fflush(stdin);fflush(stdout);
	gets(s);
	int i,cmp;
	int count;
	for(i=0;i<3;i++) {
		cmp = strcmp(studentList[i].province,s);
		if (cmp==0) {
			if(count==0) { 
		    printf("\nHo ten: %s",studentList[i].name);
		    printf("\nTinh thanh: %s",studentList[i].province);
		    printf("\nNam sinh: %d\n",studentList[i].year);
            count=1;
		}
	}
		if (count==0){
			printf("Khong tim thay sinh vien o tinh thanh nay\n");
			break;
		}
	}
}

void save() {
	FILE *file;
    file = fopen("student.txt", "w");
    int i;
    for (i=0; i<3; i++) {
        fprintf(file, "Sinh vien %d:\n", i+1);
        fprintf(file, "Ho ten: %s\n", studentList[i].name);
        fprintf(file, "Tinh thanh: %s\n", studentList[i].province);
        fprintf(file, "Nam sinh: %d\n\n", studentList[i].year);
    }
    
    fclose(file);
    printf("Luu file thanh cong!\n");
}




int main(int argc, char *argv[]) {
	int choose;
	do {
		showMenu();
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				input(); 
				break;
			}
			case 2:{
				display(); 
				break;
			}
			case 3:{
				findmin(studentList,3);
				break;
			}
			case 4:{
				findprovince(studentList);
				break;
			}
			case 5:{
				save();
				break;
			}
			case 6:{
				printf("Chuong trinh ket thuc\n");
				break;
			}
			default:{
				printf("\nNhap sai\n");
				break;
			}
		}
	} while (choose != '6'); 
	return 0;
}
