#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define HATA printf("\nDosya Acilamadi\n")

enum vites_durumu{
    otomatik,
    manuel,
};
struct araba{
    char Marka[30];
    char seri[30];
    int yil;
    int motor_guc;
    float fiyat;
    enum vites_durumu vites;
};

void set_dosya();
void get_dosya(struct araba Araba[],int deger);
struct araba set_araba();
char* dosya_adi = "araba.db";
int *sayi;


int main(){
    int aralik;
   set_dosya();
   aralik = *sayi;
   struct araba ARABA[aralik];
   get_dosya(ARABA,aralik);
  

return 0;
}


void set_dosya(){

    FILE *dosya = fopen(dosya_adi,"wb");
    if(dosya==NULL) {
        HATA;
        exit(1);
    }
    else{
        struct araba araba1;
        int devam=0,sayac=0;
        sayi = &sayac;
        do{
            araba1= set_araba();
            fwrite(&araba1,sizeof(araba1),1,dosya);

            while(1 == 1) {
                printf("Devam edilsin mi(devam 1 cik 0):");
                scanf("%d", &devam);
                if(devam==1 || devam==0) {
                    printf("dosya%s",devam=='1'?"ya yazilma islemi devam ediyor...":" kaydediliyor...\n");
                    sleep(1);
                    break;
                }
                printf("1 veya 0 girmeniz  gerekli...");
            }
           sayac++;
        }while(devam==1);
    }
    fclose(dosya);
}

void get_dosya(struct araba Araba[],int deger){

    FILE * dosya;
    dosya= fopen(dosya_adi,"rb+");

    if(dosya==NULL){
        HATA;
        exit(1);
    }else{

        for(int i =0;i<deger;i++) {
            fread(&Araba[i], sizeof(struct araba), 1, dosya);
            fseek(dosya, (i+1)*sizeof(struct araba), SEEK_SET); //SEEK_CUR SEEK_END
        }
        fclose(dosya);

        printf("->Dosyada Bulunan Arabalar<-\n");
        printf("____________\n");
        for(int i =0;i<deger;i++) {

            printf("Marka:%s\n",Araba[i].Marka);
            printf("Seri:%s\n", Araba[i].seri);
            printf("Yil:%d\n", Araba[i].yil);
            printf("Fiyat:%.2f TL\n", Araba[i].fiyat);
            printf("Motor Gucu:%dhp\n", Araba[i].motor_guc);
            printf("vites:%s\n",Araba[i].vites==0?"otomtik":"manuel");
            printf("____________\n");
        }
    }

}

struct araba set_araba(){
    struct araba araba_kaydet;
    printf("->Araba Bilgilerini Girin<-\n");
    printf("Marka:");
    scanf("%s",araba_kaydet.Marka);
    printf("Seri:");
    scanf("%s",araba_kaydet.seri);
    printf("Yil:");
    scanf("%d",&araba_kaydet.yil);
    printf("Motor Guc:");
    scanf("%d",&araba_kaydet.motor_guc);
    printf("Fiyat:");
    scanf("%f",&araba_kaydet.fiyat);
    printf("Vites(oto 0 manuel 1):");
    scanf("%d",&araba_kaydet.vites);
    return araba_kaydet;

}
