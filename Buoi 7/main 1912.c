#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void input() {
int i,*t,n;
int total=0; 
	printf("\nNhap so phan tu can them: ");
	scanf("%d", &n);
	if (total == 0) {
		t = (int *) calloc(n, sizeof(int));
	} else {
		t = (int *) realloc(t, (total + n) * sizeof(int));
	}
	for(i=total;i<total + n;i++) {
		printf("\nNhap phan tu t[%d] = ", i);
		scanf("%d", t + i);
	}
	total += n;
}

void hienThiMang(int* arr, int n) {
    int i;
	printf("Danh sach cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int tinhTongMang(int* arr, int n) {
    int i;
	int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void sapXepMang(int* arr, int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int* arr = NULL;
    int n;
    int choice;

    while (1) {
        printf("Menu chuong trinh: \n");
        printf("1. Nhap vao N so nguyen\n");
        printf("2. Hien thi danh sach cac phan tu trong mang\n");
        printf("3. Tinh tong cac phan tu trong mang\n");
        printf("4. Sap xep cac phan tu trong mang theo thu tu tang dan\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang (1-5): ");
        scanf("%zu", &choice);

        switch (choice) {
        case 1:
            nhapMang(&arr, &n);
            break;
        case 2:
            hienThiMang(arr, n);
            break;
        case 3:
            printf("Tong cac phan tu trong mang: %d\n", tinhTongMang(arr, n));
            break;
        case 4:
            sapXepMang(arr, n);
            printf("Da sap xep cac phan tu trong mang\n");
            break;
        case 5:
            free(arr);
            exit(0);
        default:
            printf("Vui long nhap lua chon hop le (1-5)!\n");
        }
    }

    return 0;
}

