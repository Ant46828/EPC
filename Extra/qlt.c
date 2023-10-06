#include <stdio.h>
#include <stdlib.h>
typedef struct tranhtheu{
	char ten[30],tacgia[30],kho[30]; 
	int chieudai,chieurong,giaban,dientich;
}tranh;
tranh dsTranh[3];
int i;
void showMenu() {
	printf("\n1. Nhap danh sach cac buc tranh");
	printf("\n2. Sap xep, thong ke va hien thi thong tin chi tiet cua buc tranh theo dien tich giam dan");
	printf("\n3. Tim buc tranh co theo gia ban");
	printf("\n4. Ghi vao tap tin nhi phan tranhtheu.dat");
	printf("\n5. Thoat");
	printf("\nChon:");
}

void input() {
	for (i=0;i<3;i++) {
		printf("\nNhap vao thong tin cua buc tranh %d",i+1);
		printf("\nTen:");
		fflush(stdin);fflush(stdout);
		gets(dsTranh[i].ten);
		printf("\nTac gia:");
		fflush(stdin);fflush(stdout);
		gets(dsTranh[i].tacgia);
		printf("\nChieu dai:");
		scanf("%d",&dsTranh[i].chieudai);
		printf("\nChieu rong:");
		scanf("%d",&dsTranh[i].chieurong);
		printf("\nGia ban:");
		scanf("%d",&dsTranh[i].giaban);
	}
}
void line() {
	for(i=0;i<80;i++) {
		printf("=");
	}
}
void sort() {
	int i,j,dientich1,dientich2;
	tranh tmp;
	for(i=0;i<2;i++) {
		for(j=i+1;j<3;j++) {
			dientich1=dsTranh[i].chieudai*dsTranh[i].chieurong;
			dientich2=dsTranh[j].chieudai*dsTranh[j].chieurong;
			if (dientich1<dientich2) {
				tmp=dsTranh[i];
				dsTranh[i]=dsTranh[j];
				dsTranh[j]=tmp;
			}
		} 
	}

		line();
		printf("\n");
		printf("Danh sach tranh\n");
		line();
		printf("\n");
		printf("%-3s||%-20s||%-15s||%-5s||%-5s||%-8s||%-15s","STT","Ten","Tac gia","Dai","Rong","Gia","Kho");
		for(i=0;i<3;i++) {
			printf("\n00%-d||%-20s||%-15s||%-5d||%-5d||%-8d||%-15s",i+1,dsTranh[i].ten,dsTranh[i].tacgia,dsTranh[i].chieudai,dsTranh[i].chieurong,dsTranh[i].giaban);
		}
	    printf("\n");
		line();
		
		int lon = 0, trungbinh = 0, nho = 0;
        for (i = 0; i < 3; i++) {
        int dienTich = dsTranh[i].chieudai * dsTranh[i].chieurong;
        if (dienTich >= 10000) {
            lon++;
        } else if (dienTich >= 2000) {
            trungbinh++;
        } else {
            nho++;
        }
    }
    printf("\nSo buc tranh thuoc khung lon: %d\n", lon);
    printf("So buc tranh thuoc khung trung binh: %d\n", trungbinh);
    printf("So buc tranh thuoc khung nho: %d\n", nho);
}










int main(int argc, char *argv[]) {
	int choose;
	do { 
	showMenu();
	scanf("%d",&choose);
	switch(choose) {
		case 1:{
			input();
			break;
		}
		case 2:{
			sort();
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			
			break;
		}
		default: {
			printf("\nNhap sai!\n");
			break;
		}
	}	
	}	while (choose != 5);
	return 0;
}
