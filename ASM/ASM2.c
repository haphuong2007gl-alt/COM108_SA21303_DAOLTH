#include <stdio.h>
#include <math.h>

int main() {
    int luaChon;
    do {
        printf("---------------------------------------------------\n");
        printf("| WELCOME TO VU HA PHUONG'S ASSIGNMENT COM108 |\n");      
        printf("----------------------- MENU ----------------------\n");
        printf("1. Chuong trinh kiem tra so nguyen\n");
        printf("2. Chuong trinh tim so uoc chung va boi chung cua hai so\n");
        printf("3. Chuong trinh tinh tien cho quan karaoke\n");
        printf("4. Chuong trinh tinh tien dien\n");
        printf("5. Chuong trinh doi tien\n");
        printf("6. Chuong trinh tinh lai xuat vay ngan hang tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Chuong trinh sap xep thong tin sinh vien\n");
        printf("9. Chuong trinh xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        if (scanf("%d", &luaChon) != 1) {
            // clear invalid input and continue the loop
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            luaChon = -1;
        }

        switch (luaChon) {

            case 1: {
                int x, prime = 1;
                printf("Nhap mot so nguyen x: ");
                if (scanf("%d", &x) != 1) { while (getchar()!='\n'); break; }

                printf("So %d la so nguyen.\n", x);

                if (x < 2) prime = 0;
                else {
                    for (int i = 2; i <= sqrt(x); i++) {
                        if (x % i == 0) {
                            prime = 0;
                            break;
                        }
                    }
                }

                if (prime) printf("So %d la so nguyen to.\n", x);
                else printf("So %d khong phai la so nguyen to.\n", x);

                int sq = (int)sqrt(x);
                if (sq * sq == x) printf("So %d la so chinh phuong.\n", x);
                else printf("So %d khong phai la so chinh phuong.\n", x);
            }
            break;

            case 2: {
                int x, y;
                printf("Nhap so x: ");
                if (scanf("%d", &x) != 1) { while (getchar()!='\n'); break; }
                printf("Nhap so y: ");
                if (scanf("%d", &y) != 1) { while (getchar()!='\n'); break; }

                int a = x, b = y;
                while (a != b) {
                    if (a > b) a = a - b;
                    else b = b - a;
                }

                int ucln = a;
                int bcnn = (x * y) / ucln;

                printf("Uoc chung lon nhat (UCLN) cua %d va %d: %d\n", x, y, ucln);
                printf("Boi chung nho nhat (BCNN) cua %d va %d: %d\n", x, y, bcnn);
            }
            break;

            case 3:
                printf("3. Chuong trinh tinh tien karaoke\n");
            break;

            case 4: {
                double kwh, tien;
                int b1=1678, b2=1734, b3=2014, b4=2536, b5=2834, b6=2927;

                do {
                    printf("\nNhap so kWh trong thang: ");
                    if (scanf("%lf", &kwh) != 1) {
                        int c;
                        while ((c = getchar()) != '\n' && c != EOF);
                        kwh = -1;
                    }
                } while (kwh < 0);

                if (kwh <= 50) {
                    tien = kwh * b1;
                    printf("\nGD ban su dung dien B1, so tien=%lf\n", tien);
                } else if (kwh <= 100) {
                    tien = 50*b1 + (kwh-50)*b2;
                    printf("\nGD ban su dung dien B2, so tien=%lf\n", tien);
                } else if (kwh <= 200) {
                    tien = 50*b1 + 50*b2 + (kwh-100)*b3;
                    printf("\nGD ban su dung dien B3, so tien=%lf\n", tien);
                } else if (kwh <= 300) {
                    tien = 50*b1 + 50*b2 + 100*b3 + (kwh-200)*b4;
                    printf("\nGD ban su dung dien B4, so tien=%lf\n", tien);
                } else if (kwh <= 400) {
                    tien = 50*b1 + 50*b2 + 100*b3 + 100*b4 + (kwh-300)*b5;
                    printf("\nGD ban su dung dien B5, so tien=%lf\n", tien);
                } else {
                    tien = 50*b1 + 50*b2 + 100*b3 + 100*b4 + 100*b5 + (kwh-400)*b6;
                    printf("\nGD ban su dung dien B6, so tien=%lf\n", tien);
                }
            }
            break;
            case 5: printf("5. Chuong trinh doi tien\n"); break;
            case 6:{
                printf("Ban vua chon CN6: Vay ngan hang\n");
                double i, tienVay, laiPhaiTra, tienGocTraHangThang, soTienPhaiTra;
                do{
                    printf("Nhap so tien vay: "); scanf("%lf", &tienVay);
                } while(tienVay<=0);
                tienGocTraHangThang = tienVay/12;
                printf("%-10.0lf", i);
                printf("%-15.0lf", laiPhaiTra);
                printf("%-20.0lf", tienGocTraHangThang);
                printf("%-20.0lf", soTienPhaiTra);
                printf("%-20.0lf\n", tienVay);

                for(i=1; i<=12; i++){
                    printf("%6lf", i);
                    laiPhaiTra=tienVay*0.05;
                    printf("%15lf", laiPhaiTra);
                    printf("%15lf", tienGocTraHangThang);
                    soTienPhaiTra=laiPhaiTra+tienGocTraHangThang;
                    printf("%19lf", soTienPhaiTra);
                    tienVay=tienVay-tienGocTraHangThang;
                    printf("%18lf", tienVay);
                    printf("\n");
                }
            } 
            break;
            case 7: printf("7. Chuong trinh vay tien mua xe\n"); 
            break;
            case 8: printf("8. Chuong trinh sap xep thong tin sinh vien\n"); 
            break;
            case 9: printf("9. Chuong trinh xay dung game FPOLY-LOTT (2/15)\n"); 
            break;
            case 10: printf("10. Chuong trinh tinh toan phan so\n"); 
            break;
            case 0:
                printf("Da thoat chuong trinh.\n");
            break;
            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }

        printf("\n");
    } while (luaChon != 0);

    return 0;
}
