#include <stdio.h>
#define PI 3.14
int main(){
    // Bai 1: Tong Hieu 2 so thuc
    float a, b, tong, hieu;
    printf("Nhap vao so thuc a, b:");
    scanf("%f %f", &a, &b);
    tong = a + b;
    printf("Tong 2 so thuc: %.3f", tong);
    hieu = a - b;
    printf("\nHieu 2 so thuc: %.3f", hieu);
    
    //Bai 2: Tinh Chu Vi dien tich HCN
    int chieudai, chieurong;
    int chuvi, dientich;
    printf("\nNhap chieu dai :");
    scanf("%d",&chieudai);
    printf("\nNhap chieu rong:");
    scanf("%d",&chieurong);
    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;
    printf("Chu vi hinh chu nhat la: %d",chuvi);
    printf("\nDien tich hinh chu nhat la: %d", dientich);
    // Bai 3
    // Bai 4
    return 0;
}