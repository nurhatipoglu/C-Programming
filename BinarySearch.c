#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int dizi[100];
	int i,j,temp;
	int aranan,baslangic,bitis,orta;
	
	srand(time(NULL)) ;
	for(i=0;i<100;i++){
		dizi[i]=rand()%10;
		printf("%3d",dizi[i]);
	}
	printf("\n\n\n");	
	
	for(i=0;i<100;i++){
		for(j=i+1;j<100;j++){
			if(dizi[i]>dizi[j]){
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
			
		}

	}
	for(i=0;i<100;i++){
		printf("%3d",dizi[i]);
	}
	printf("\n");	
	printf("Aranan degeri giriniz:");
	scanf("%d",&aranan);
	baslangic=0,bitis=99,orta=(baslangic+bitis)/2;
	while(bitis>=baslangic){
		if(aranan==dizi[orta]){
			printf("%d degeri %d. indiste bulundu",aranan,orta);
			break;
		}
		else if(aranan>dizi[orta]){
			baslangic=orta+1;
		}
		else{
			bitis=orta-1;
		}
		orta=(baslangic+bitis)/2;
	}
	if(baslangic>bitis){
		printf("Aranan deger bulunamadi");
	}
}
