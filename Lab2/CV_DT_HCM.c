// Bai 2: Tinh chu vi dien tich HCM
#include <stdio.h>
#define PI 3.14
int main()
{
    //const float PI = 3.14;
    int chieudai, chieurong;
    int chuvi, dientich;
    printf("Nhap chieu dai :");
    scanf("%d",&chieudai);
    printf("Nhap chieu rong:");
    scanf("%d",&chieurong);
    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;
    printf("Chu vi hinh chu nhat la: %d",chuvi);
    printf("\nDien tich hinh chu nhat la: %d", dientich);
    return 0;
}