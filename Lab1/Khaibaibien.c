#include <stdio.h>

int main(){
    int a, b,tong,hieu;//khai bao bien
    //printf("Hello, chao cac ban");
    //printf("Hello, chao cac ban");
    printf("\nNhap vao a va b:");
    scanf("%d %d", &a,&b);
    tong = a+b;
    hieu = a-b;
    printf("Tong cua 2 so: %d", tong);
    printf("\nHieu cua 2 so: %d", hieu);
    return 0;
}