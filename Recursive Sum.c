#include<stdio.h>
int toplama(int n){
	if(n==0){
		return 0;
	}
	else{
		return n+toplama(n-1);
	}
}

int main(){
	int n;
	printf("Sayiyi giriniz:");
	scanf("%d",&n);
	
	printf("Toplam= %d",toplama(n));
}
