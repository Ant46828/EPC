#include <stdio.h>
#include <stdlib.h>
//void showInfor() {
//    char name[] = "Vu Nguyen Truong An";
//    int age = 18;
//    char address[] = "Tay Tra, Hoang Mai, Ha Noi";
//    char email[] = "rumbomongto@gmail.com";
//    char phone[] = "0968241482";
//
//    printf("Name: %s\n", name);
//    printf("Age: %d\n", age);
//    printf("Address: %s\n", address);
//    printf("Email: %s\n", email);
//    printf("Phone: %s\n", phone);
//}
//void showMessage(int msg) {
//	printf ("\nHello\n",msg);}
//int main() {
//    showInfor();
//
//	showMessage(1);
//	showMessage(2);
//	showMessage(3);
//	
int tinhGiaiThua(int n) {
    int i;
	int giaiThua = 1;
    for (i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int tinhTong(int m) {
    int i;
	int tong = 0;
    for (i = 1; i <= m; i++) {
        tong += i;
    }
    return tong;
}

int main() {
    int n = 5;
    int m = 10;

    int giaiThuaN = tinhGiaiThua(n);
    int tongM = tinhTong(m);

    printf("Giai thua cua %d la: %d\n", n, giaiThuaN);
    printf("Tong cua 1 den %d la: %d\n", m, tongM);

    if (giaiThuaN > tongM) {
        printf("Giai thua lon hon tong\n");
    } else if (giaiThuaN < tongM) {
        printf("Tong lon hon giai thua\n");
    } else {
        printf("Giai thua bang tong\n");
    }

    return 0;
}
//}

 
