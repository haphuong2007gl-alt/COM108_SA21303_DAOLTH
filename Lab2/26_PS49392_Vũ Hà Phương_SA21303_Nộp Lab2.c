#include <stdio.h>
#define PI 3.14
int main(){
    //Bài 1:XÂY DỰNG CHƯƠNG TRÌNH CỘNG TRỪ 2 SỐ
   int x, y;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);

    int tong = x + y;
    int hieu = x- y;
    printf("Tong cua hai so nguyen: %d\n", tong);
    printf("Hieu cua hai so nguyen; %d\n", hieu);

    //Bai 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cdai, crong;

    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);

    printf("Nhap chieu rong: ");
    scanf("%f", &crong);

    float chuvi = (cdai + crong) * 2;
    float dientich = cdai * crong;

    printf("Chu vi = %.2f\n", chuvi);
    printf("Dien tich = %.2f\n", dientich);

    //Bai 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float r;

    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    float chuviHT = 2 * 3.14 * r;
    float dientichHT = 3.14 * r * r;

    printf("Chu vi HT = %.2f\n", chuviHT);
    printf("Dien tich HT = %.2f\n", dientichHT);

    //Bai 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
    float Toan, Ly, Hoa, diemTB;
    printf("\nNhap vao diem Toan, Ly, Hoa:");
    scanf("%f %f %f", &Toan, &Ly, &Hoa);
    diemTB = (Toan*3 + Ly*2 + Hoa*1)/6;
    printf("Diem trung binh: %.2f\n", diemTB);

    //Bai 5: XÂY DƯNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TAM GIÁC VUÔNG
    float a, b, c, chuviTG, dientichTG;

    printf("Nhap canh goc vuong thu nhat: ");
    scanf("%f", &a);

    printf("Nhap canh goc vuong thu hai: ");
    scanf("%f", &b);

    c = sqrt(a*a + b*b);

    chuviTG = a + b + c;
    dientichTG = (a * b) / 2;

    printf("Chu vi tam giac vuong = %.2f\n", chuviTG);
    printf("Dien tich tam giac vuong = %.2f\n", dientichTG);

    return 0;
}
