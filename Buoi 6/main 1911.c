#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p,i;
    p = (int)malloc(10 * sizeof(int));

    for (i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    int sum = 0;
    for (i = 0; i < 10; i++) {
        if (p[i] % 2 == 0) {
            sum += p[i];
        }
    }

    printf("Tong cac so chia het cho 2 trong mang la: %d\n", sum);
    return 0;
}
