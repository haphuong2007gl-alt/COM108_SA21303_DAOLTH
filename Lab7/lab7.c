#include <stdio.h>
int a[5][5];
int i,j,teamp;
int tong=0;
int main() {
    for(int i=0; i<5; i++)
        for(int j=0;j<5;j++){
        printf("Nhap cac phan tu a[%d]: ",i,j);
        scanf("%d ",&a[i][j]);
        }
    printf("Xuat mang a[%d][%d]:\n",i,j);
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }

    for(int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            tong+=a[i][j];
    printf("\nTong mang = %d\n", tong);
    return 0;
}