#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
	int boyut,i=0,a,sayac=0,b;
	printf("Karakter boyutunu giriniz:");
	scanf("%d",&boyut);
	
	char karakter[100];
	char sesli[10]="aeiou";
	char sessiz[20]="bcdfghjklmnprstvyz";
	
	while(sayac<boyut){
		if(sayac%2==0){
			a=rand()%5;
			karakter[sayac]=sesli[a];
		}
		else{
			b=rand()%18;
			karakter[sayac]=sessiz[b];
		}
		sayac++;
	}
	printf("%s",karakter);
}
