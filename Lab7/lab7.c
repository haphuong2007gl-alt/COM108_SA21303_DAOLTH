#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    // BÀI 1:  XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1
    char str[200];
    int vowel = 0, consonant = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);

        if (c >= 'a' && c <= 'z') {  // chỉ tính chữ cái
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowel++;
            else
                consonant++;
        }
    }

    printf("So nguyen am: %d\n", vowel);
    printf("So phu am: %d\n", consonant);


    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
    char user[50], pass[50];
    char correctUser[] = "admin";
    char correctPass[] = "123";

    printf("\nNhap username: ");
    scanf("%s", user);

    printf("Nhap password: ");
    scanf("%s", pass);

    if (strcmp(user, correctUser) == 0 && strcmp(pass, correctPass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }

    return 0;
}
