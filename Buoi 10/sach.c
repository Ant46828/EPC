#include <stdio.h>
#include <stdlib.h>
int i,j;
typedef struct book_st {
	char ten[30], theloai[30];
	int giatien;
	int namxuatban;
} Book;
Book bookList[3]; 

void showMenu() {
	printf("\nMenu:\n");
	printf("1. Nhap du lieu sach\n");
	printf("2. Sap xep, hien thi thong tin cua tung quyen sach theo the loai, theo nam xuat ban\n");
	printf("3. Tim sach theo the loai\n");
	printf("4. Ghi vao tap tin nhi phan book.dat\n");
	printf("5. Thoat\n");
	printf("Chon:");
}

void input(Book *bookList) {
	for(i=0 ; i<3 ; i++) {
		printf("\nNhap quyen sach %d:",i+1);
     	printf("\nNhap ten: ");
		fflush(stdin); fflush(stdout);
		gets(bookList[i].ten);
		
		printf("\nThe loai: ");
		fflush(stdin); fflush(stdout);
		gets(bookList[i].theloai);
		
		printf("\nGia tien: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &bookList[i].giatien);
		
		printf("\nNam xuat ban: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &bookList[i].namxuatban);
	}
}

void display(Book *bookList) {
	printf("\n%-5s||%-20s||%-15s||%-10s||%-15s","STT","Ten","The loai","Gia tien","Nam xuat ban");
	for (i=0;i<3;i++) {
			printf("\n%d    ||%-20s||%-15s||%-10d||%-15d",i+1,bookList[i].ten,bookList[i].theloai,bookList[i].giatien,bookList[i].namxuatban);
	}
}






int main(int argc, char *argv[]) {
    Book bookList[3];
	int choice;
    do {
	showMenu();
	scanf("%d",&choice);
    switch (choice) {
    	case 1:
    		input(bookList);
    		break;
    	case 2:
    		display(bookList);
    		break;
    	case 3:
    	    break;
    	case 4:
    	    break;
    	case 5:
    	    printf("Ket thuc chuong trinh");
    	    break;
    	default:
    		printf("Lua chon khong hop le!");
    }
}    while (choice != 5);
	return 0;
}
