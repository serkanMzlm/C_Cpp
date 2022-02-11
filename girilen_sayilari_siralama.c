#include<stdio.h>
int tekrar();
void  degerata(int dizi[],int sayi);
void  sirala(int dizi[],int deger);
void  goster(int dizi[],int sayi);
int main(){
	int deger, dizi[10];
	
	baslangic:
	printf("Sayiniz 0 ile 10 arasinda olmalidir\n");
	printf("kac sayi giriceksiniz : ");
	scanf("%d",&deger);
	
	if(deger>0 && deger<10)
	{
		degerata(dizi,deger);
		for(int i=0 ; i<deger ; i++)
		{
		sirala(dizi,deger);
		}
		goster(dizi,deger);	
	}
	else 
		printf("girdiginiz deger hatali ...");
	
	if(tekrar()==1)
		goto baslangic;
		
	return 0;	
}

void degerata(int dizi[],int sayi){
	for(int i =0; i<sayi ; i++){
		printf("%d. degeriniz : ",i+1);
		scanf("%d",&dizi[i]);		
	}
}

tekrar(){
	int karar;
	tekrar :
	printf("\n--------------------------\n");
	printf("Tekrar (1)\nCikis (2)");
	printf("\n--------------------------\n");
	scanf("%d",&karar);	
	if(karar==1)
		return 1;
	else{
		if(karar == 2){
			printf("islem sonlandiriliyor ...");
		}
		else {
			printf("Hatali deger ...");	
			goto tekrar;
		}
	
	}
	return 0;		
}

void sirala(int dizi[], int deger){
	int yedek;
	for(int i = 0 ; i<deger-1 ; i++)
	{
		if(dizi[i]>dizi[i+1])
		{
			yedek = dizi[i+1];
			dizi[i+1] = dizi[i];
			dizi[i] = yedek ;	
		}

	}
	

	for(int i = deger-1 ; i>0 ; i--)
	{
		if(dizi[i]<dizi[i-1]){
			yedek = dizi[i-1];
			dizi[i-1] = dizi[i];
			dizi[i] = yedek ;
			
		}
	
	}
}

void goster(int dizi[],int sayi){
	printf("\n------------------------------------\n");
	for(int i=0 ; i<sayi ; i++){
		printf("%d. deger : %d\n",i+1,dizi[i]);
	}
	printf("\n------------------------------------\n");
}



