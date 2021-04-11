#include<stdio.h>
#include<stdlib.h>

int replace(char *s,char a,char b){
	int i=0,sayac=0;
	while(*(s+i) != '\0'){
		if(*(s+i) == a){
			sayac++;
			*(s+i) = b;
			i++;
		}
		else i++;
	}
	printf("Metnin yeni hali:%s\n",s);
	
	return sayac;
}


int main(){
	char s[50],a,b;
	printf("Metni giriniz:");
	gets(s);
	printf("Sirasiyla hangi karakterin tekrarini degistirmek istediginizi ve ne ile degistirmek istediginizi giriniz:\n");
	scanf("%c %c",&a,&b);
	
	int n = replace(s,a,b);
	printf("Degistirilen karakter sayisi = %d",n);
}

