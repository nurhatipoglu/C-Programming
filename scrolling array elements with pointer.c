#include<stdio.h>

void kaydir(int *ptr,int kaydirmaMiktari,int diziBoyut);
void diziYazdir(int *);
////////////////////////////////////////////////////////////////////////////////
main (){
	int *ptr;
	int i,deger,tmp,boyut;
	int dizi[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};	
	ptr=dizi;
	diziYazdir(ptr);
	boyut=sizeof(dizi)/4;
	printf("%d",boyut);
	printf("\nBir deger giriniz.");
	scanf("%d",&deger);
	kaydir(ptr,deger,boyut);
	diziYazdir(ptr);
}
////////////////////////////////////////////////////////////////////////////////
void kaydir(int *ptr,int kaydirmaMiktari,int diziBoyut){
	int i,tmp;
	if(kaydirmaMiktari>0){	
	tmp=*(ptr+diziBoyut-1);
	for(i=diziBoyut-1;i>0;i--){
		*(ptr+i)=*(ptr+i-1);
	}	
		*(ptr)=tmp;
	kaydir(ptr,kaydirmaMiktari-1,diziBoyut);
	}
	}
////////////////////////////////////////////////////////////////////////////////	
void diziYazdir(int *ptr){
	int i;	
	for(i=0;i<20;i++){
		printf("%3d",*(ptr+i));
	}
}