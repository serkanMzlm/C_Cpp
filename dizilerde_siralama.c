#include<stdio.h>
int main(){
	int dizi[4]={9,3,6,1};
	printf("baslangic : ");
	for(int a=0;a<4;a++){
		printf("%d ",dizi[a]);
	}
	for(int b=0;b<3;b++){
	
	for(int i=0;i<3-b;i++){
		if(dizi[i]>dizi[i+1]){
			int passive=dizi[i];
			dizi[i]=dizi[i+1];
			dizi[i+1]=passive;
		}
	}
	printf("\n%d. durum : ",b+1);
	for(int i=0;i<4;i++){
		printf("%d ",dizi[i]);
	}
}
	return 0;	
}
