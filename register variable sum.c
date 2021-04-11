#include<stdio.h>
int main(){
	register int sayi;
	register int toplam=0;
	for(sayi=0 ;sayi<10000 ;sayi=sayi+5){
		toplam+=sayi;
	}
	printf("Sum= %d",toplam);
}
