#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int N;
    printf("\nNhap do cao tam giac N = ");
    scanf("%d", &N);
   
    int i, j;
   
    //Cau c:
    printf("\nTao giac\n");
    for(i=0;i<N;i++) {
        //Tao do cao
        for(j=0;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
   
    //Cau a
    printf("\nTao giac\n");
    int space = N - 1;
    for(i=0;i<N;i++) {
        //Tao do cao
        for(j=0;j<space - i;j++) {
            printf(" ");
        }
        for(j=0;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
   
    printf("\nTao giac\n");
    space = N - 1;
    for(i=0;i<N;i++) {
        //Tao do cao
        for(j=0;j<space - i;j++) {
            printf(" ");
        }
        printf("* ");
        if(i < N - 1) {
            for(j=1;j<i;j++) {
                printf("  ");
            }    
        } else {
            for(j=1;j<i;j++) {
                printf("* ");
            }
        }
       
        if(i > 0) {
            printf("* ");
        }
       
        printf("\n");
    }
   
   printf("\nTam giac\n");
    for(i=0;i<N-1;i++) {
        for(j=0;j<N;j++) {
          if (j==0 || j==i) 
            printf(" * ");
          else
          printf ("   ");
        }printf("\n");
    }
    for (i=0;i<N;i++)
    printf(" * ");
    
    int m,n;
    printf("\nNhap chieu dai m:");
    scanf ("%d",&m);
    printf("\nNhap chieu rong n:");
    scanf ("%d",&n);
    printf ("\nHinh chu nhat\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++){
        printf("* ");
        }
    printf ("\n");
    }
    printf ("\nHinh chu nhat rong\n");
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++){
     if (i==0||i==n-1||j==0||j==m-1) {
     printf("* ");
     } else printf("  ");
        }
     printf("\n");
     }
    
    int a,b,c;
    for(a=0;a<=200;++a)
    for(b=0;a<=100;++b)
    for(c=0;a<=40 ;++c)
    if (a*1000 + b*2000 + c*5000 == 200000)
    printf ("\nSo to 1000 la: %d",a);
    printf ("\nSo to 2000 la: %d",b);
    printf ("\nSo to 5000 la: %d",c);
    return 0;
}

    
