#include <stdio.h>

int main(){
    double diem;
    printf("Nhap diem cua ban: ");
    scanf("%lf", &diem);
    /*if(diem>=5){
        printf("Dau!!!");
    }else 
        printf("Rot$$$$");*/
    // tinh hoc luc sv
    if(diem>9){
        printf("Xuat sac");
    }else if (diem>=8 && diem<9)
    {
        printf("Gioi");
    }else if (diem>=7 && diem <8)
    {
        printf("Kha");
    }else if (diem>=5 && diem<7)
    {
        printf("Trung Binh");
    }else if (diem>=3 && diem<5)
    {
        printf("Yeu!!!!");
    }else{
        printf("Kem^_^");
    }  
    printf("Het Lab 3"); 
    return 0;
}