#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int dizi[100];
	int i,j,temp;
	
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
}
