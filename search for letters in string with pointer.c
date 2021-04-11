#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int harfBul(char *dizi,char *harf){
	int i,s=0;
	for(i = 0; *(dizi+i) != '\0'; i++){
		if(*(dizi +i) == *harf){	
		    s++;
		    if(s == 1){
		    	printf("%c harfi %d. karakterdedir\n",*harf,i+1);
			}
		}
	}	
	return s;
}

int main(){
	char harf;
	char *string = (char*)malloc(sizeof(char)*99);
	
	printf("Kelime giriniz:");
	gets(string);
	printf("Istenilen harfi giriniz: ");
	scanf("%c",&harf);
	
	int z = harfBul(string,&harf);
	
	if(z ==0){
		printf("%c harfi dizide yoktur\n",harf);
	}
	else{
		printf("%c harfi dizide %d tanedir\n",harf,z);
	}
}