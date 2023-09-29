#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i; 
// Ham tinh tong cac so chia het cho 5
int tinhTongChiaHetCho5(int arr[], int N) {
    int tong = 0;

    // Duyet qua tung phan tu trong mang
    for (i = 0; i < N; i++) {
        // Neu phan tu chia het cho 5 thi cong vao tong
        if (arr[i] % 5 == 0) {
            tong += arr[i];
        }
    }

    return tong;
}

// Ham kiem tra so chinh phuong
int laSoChinhPhuong(int num) {
    int i = 0;

    // Lay binh phuong cua i
    while (i * i < num) {
        i++;
    }

    // Neu binh phuong cua i bang num, thi num la so chinh phuong
    if (i * i == num) {
        return 1;
    } else {
        return 0;
    }
}

// Ham sap xep mang sao cho cac phan tu chan o dau, cac phan tu le o cuoi
void sapXep(int arr[], int N) {
    int i = 0;
    int j = N - 1;

    // Su dung phuong phap hai con tro
    while (i < j) {
        // Tim phan tu le bat dau tu dau mang
        while (i < j && arr[i] % 2 == 0) {
            i++;
        }

        // Tim phan tu chan bat dau tu cuoi mang
        while (i < j && arr[j] % 2 != 0) {
            j--;
        }

        // Hoan doi hai phan tu tim duoc
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main() {
    int N;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &N);

    int arr[N];

    // Nhap gia tri cho tung phan tu trong mang
    for (i = 0; i < N; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Tinh tong cac so chia het cho 5
    int tong = tinhTongChiaHetCho5(arr, N);
    printf("Tong cac so chia het cho 5: %d\n", tong);

    // In cac so chinh phuong
    printf("Cac so chinh phuong: ");
    for (i = 0; i < N; i++) {
        if (laSoChinhPhuong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Sap xep mang
    sapXep(arr, N);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
