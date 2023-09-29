#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct HCN {
	float chieudai;
	float chieurong; 
	float dientich; 
};
int main(int argc, char *argv[]) {
struct HCN HCN[5]; 
int i;
float dientich;
float Tongdientich;
for(i=0;i<5;i++){
	printf("\nHinh chu nhat %d:\n",i+1);
	printf("\nChieu dai:");
	scanf("%f",&HCN[i].chieudai);
	printf("\nChieu rong:");
	scanf("%f",&HCN[i].chieurong);
} 
for(i=0;i<5;i++) {
	dientich = HCN[i].chieudai * HCN[i].chieurong;
    printf("\nDien tich hinh chu nhat %d la:%f",i+1,dientich); 
Tongdientich += dientich; 
}
printf("\nTong dien tich 5 hinh chu nhat la :%f",Tongdientich); 
	return 0;
}

