#include <stdio.h>


int main(){
	int sayi , tersi = 0 , kalan  ;
	printf("Tam sayi girin : ");
	scanf("%d",&sayi);

	while (sayi>0){
		
		kalan = sayi%10;
		tersi = tersi*10 + kalan;
		sayi = sayi/10;
	}
	printf("Sayinin tersi : %d",tersi);
	
	return 0 ;
	
}
