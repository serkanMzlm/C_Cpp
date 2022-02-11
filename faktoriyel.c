// faktöriyel hesaplama
#include <stdio.h>
#define HATA printf("Hata Olustu...");
int fak(int );

int main() {
    int sayi,sonuc;
    printf("Faktoriyel Hesaplama\n");
    printf("Faktoriyel Alinicak Sayi:");

    if(scanf("%d",&sayi)) {
        printf("%d! => ", sayi);
        sonuc = fak(sayi);
        printf("%s%d",sayi==0?"":"1=",sonuc);
    }
    else HATA;


    return 0;
}
int fak(int sayi){

if (sayi==1 || sayi==0) return 1;
printf("%dx",sayi);
return sayi*fak(sayi-1);
}
