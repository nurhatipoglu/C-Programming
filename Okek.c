#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	printf("1.sayiyi giriniz:");
	scanf("%d",&a);
	printf("2.sayiyi giriniz:");
	scanf("%d",&b);
okek(a,b);
}
    int okek(int a,int b){
    	
    	int i=1,c,d=1;
    	c=a;
    if(a<b)c=b;
    while(c>1)
    	{
    		
    		if(a%i==0||b%i==0) d=d*i;
    	if(a%i==0)	a=a/i;
    		if(b%i==0)b=b/i;
    if(c%i==0)		c=c/i;
    		i++;
		}
		printf("%d",d);
	}
