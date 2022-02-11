//düzgün dörtgenlerde alan ve cevre hesaplama
#include <stdio.h>
void bilgi();
int main() {
    float yukseklik,genislik;
   bilgi();
   printf("Yukseklik:");
   scanf("%f",&yukseklik);
   printf("Genislik:");
   scanf("%f",&genislik);
   printf("Alan:%.2f\n",yukseklik*genislik);
   printf("Cevre:%.2f\n",2*(yukseklik+genislik));

    return 0;
}
void bilgi(){
    printf("   Duzgun Dortgenlerde\n");
    printf("Alan ve Cevre Hesaplama\n");
}
