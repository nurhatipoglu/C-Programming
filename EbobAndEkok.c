#include<stdio.h>

int ebob_bul(int a,int b){
	int i,ebob;
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			ebob=i;
		}
	}	
	return ebob;
}

int ekok_bul(int a,int b){
	int i=1,ekok;
	while(1){
		i++;
		if(i%a==0 && i%b==0){
			ekok=i;
			break;
		}
	}
	return ekok;
}

int main(){
	int a,b,i,ebob;
	printf("1.sayiyi giriniz: ");
	scanf("%d",&a);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("%d ve %d sayilarinin ebobu: %d\n",a,b,ebob_bul(a,b));
	printf("%d ve %d sayilarinin ekoku: %d",a,b,ekok_bul(a,b));
	
}
