#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void non_duplicate(int *arr){
	int i,j,s=0,k=0;
	int *newarr = malloc(sizeof(int)*20);
	for(i=0;i<20;i++){
		for(j=i+1;j<20;j++){
			if( *(arr+i) == *(arr+j) ){
				*(arr+j) = -1;
			}
		}
		
		/*-1 degerini tekrar eden elemanlara eşitlemiştik.Burada eğer dizi elemanı -1 değilse bütün değerleri yeni diziye 
		atıyoruz böylece tekrar etmeyen ama bütün değerleri içeren yeni dizimizi oluşturmuş oluyoruz. */
		if( *(arr+i) != -1 ){
			*(newarr+k) = *(arr+i) ; 
			k++;
		}
	}
	
	printf("\tYeni dizi\n");
	for(i=0;i<k;i++){
		printf("%d ",*(newarr+i));
	}
}

int main(){
	srand(time(NULL));
	int i;
	int *array = malloc(sizeof(int)*20);
	
	printf("\tDizi\n");
	for(i=0;i<20;i++){
		array[i] = rand()%10;
		printf("%d ",array[i]);
	}
	printf("\n");
	
	non_duplicate(array);
	
	free(array);
}



