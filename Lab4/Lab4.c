#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n-------MENU CHUONG TRINH------\n");
        printf("1. Tinh trung binh cac so tu nhien chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int min, max, i;
            float tong = 0, bienDem = 0, trungBinh = 0;

            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            i = min;
            while (i <= max) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
                i++;
            }

            if (bienDem == 0) {
                printf("Khong co so chan nao trong khoang!\n");
            } else {
                trungBinh = tong / bienDem;
                printf("Trung binh cac so chan = %.2f\n", trungBinh);
            }
        }

        else if (choice == 2) {
            int x, i, count = 0;
            printf("Nhap x: ");
            scanf("%d", &x);

            for (i = 2; i < x; i++) {
                if (x % i == 0) {
                    count++;
                }
            }

            if (count == 0 && x > 1) {
                printf("%d la so nguyen to\n", x);
            } else {
                printf("%d khong phai so nguyen to\n", x);
            }
        }

        else if (choice == 3) {
            int x, i, isSquare = 0;
            printf("Nhap x: ");
            scanf("%d", &x);

            for (i = 1; i < x; i++) {
                if (i * i == x) {
                    isSquare = 1;
                    break;
                }
            }

            if (isSquare == 1) {
                printf("%d la so chinh phuong\n", x);
            } else {
                printf("%d khong phai so chinh phuong\n", x);
            }
        }

        else if (choice == 4) {
            printf("Thoat chuong trinh.\n");
        }

        else {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
        }

    } while (choice != 4);

    return 0;
}