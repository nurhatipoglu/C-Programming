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
	 for(i=1;i<100;i++){
	 	for(j=0;j<100-i;j++){
	 		if(dizi[j]>dizi[j+1]){
	 			temp=dizi[j];
	 			dizi[j]=dizi[j+1];
	 			dizi[j+1]=temp;
			 }
		 } 
		 
	 }
	 for(i=0;i<100;i++){
	 	printf("%3d",dizi[i]);
	 }
	
}
