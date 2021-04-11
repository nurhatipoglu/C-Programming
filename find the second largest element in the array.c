#include<stdio.h>
#include<stdlib.h>
#include<time.h>


    int dizi(int u) {
	int dizi[u],a,j,b,i;
	srand(time(NULL));
	for(i=0;i<15;i++){
		dizi[i]=rand()%10;
		printf("dizi:%d\n",dizi[i]);
	}
	a=dizi[0];
	for(i=1;i<15;i++){
	if(a<dizi[i])a=dizi[i];
		
	}
	for(i=0;i<15;i++){
	if(a==dizi[i])
	{
		for(j=i;j<15;j++)
		{
			dizi[i]=dizi[i+1];
		}
	}
		
	}
	b=dizi[0];
	for(i=0;i<14;i++){
		if(b<dizi[i])b=dizi[i];
	}
	printf("second largest value:%d",b);

}int main(){
	dizi(15);
}

