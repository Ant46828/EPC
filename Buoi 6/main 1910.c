#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a[100];
    int n,i,j;
    printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    for(i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    // Sap xep dung thuat toan sap xep chon
    int tg;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    
    return 0; 
}
