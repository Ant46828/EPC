#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,n,i,j,k,count;
    int *p;
    i = 0;
    count =0;
    p= (int *) calloc(1, sizeof(int));
    for (;;)
    {
        printf("\nMenu chuong trinh");
        printf("\n=============================");
        printf("\n1.Nhap vao so nguyen x");
        printf("\n2.Sap xep cac so theo thu tu tang dan");
        printf("\n3.Tim kiem phan tu trong mang");
        printf("\n4.Xoa phan tu trong mang");
        printf("\n5.Hien thi");
        printf("\n6.Thoat");
        printf("\n=============================");
        printf("\nNhap lua chon chuong trinh = ");
        scanf("%d",&n);
        if(n == 1){
            printf("Nhap vao so nguyen x = ");
            scanf("%d",p + i);
            i++;
            p = (int *) realloc(p, i *sizeof(int) );
            
        }
        if( n ==2){
            printf("cac so duoc sap xep theo thu tu tang dan: ");
            for (j=0;j<i;j++){
                for (k=i-1;k>j;k--){
                if(p[j]>p[k]){
                    p[j] =p[j]+p[k];
                    p[k] = p[j]-p[k];
                    p[j] = p[j] - p[k];
                }
            }
        }
        for (j=0;j<i;j++){
            printf("%d ", p[j]);
        }
    }
    if(n == 3){
        printf("\nNhap so can tim trong mang = ");
        scanf("%d", &x);
        for (j=0;j<i;j++){
            if(p[j] == x){
                count++;
            }
        }
        printf("\nso phan tu co gia tri bang gia tri can tim la = %d", count);
    }
    if (n==4){
        printf("\nNhap phan tu can xoa = ");
        scanf("%d",&x);
        for (j=0;j<i;j++){
            if(p[j]==x){
                for(k=j;k<i;k++){
                p[k]=p[k+1];
                }
                i--;
                j--;
            }
        }
        for (j=0;j<i;j++)
        {
            printf("%d ",p[j]);
        }
    }
    if( n == 5){
        printf("\nCac phan tu trong mang: ");
        for (j=0;j<i;j++)
        {
            printf("%d ",p[j]);
        }
    }
    if( n == 6){
        return 0;
    }
}
free (p);

    return 0;
}
