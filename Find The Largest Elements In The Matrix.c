#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int matris[5][5],satir[5],sutun[5];
	int i=0,j=0;
	int enbuyuk=0,sat=0,sut=0,x=0;
	
	srand(time(NULL));
	printf("Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	 matris[i][j]=rand()%100;
	 printf("%3d",matris[i][j]);
        } 
        printf("\n");
    }
	for(i=0;i<5;i++){
		sat=0;
		sut=0;
		for(j=0;j<5;j++){
			if(matris[i][j]>enbuyuk){
				enbuyuk=matris[i][j];
			}
			if(matris[i][j]>sat){
				sat=matris[i][j];
			}
			if(matris[j][i]>sut){
				sut=matris[j][i];
			}
		}
		satir[x]=sat;
		sutun[x]=sut;
		x++;
	}
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%d satirin en buyuk degeri: %d\n",i+1,satir[i]);
	}
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%d sutunun en buyuk degeri: %d\n",i+1,sutun[i]);
	}
	printf("\n\n");
	
		printf("Matrisin en buyuk degeri: %d",enbuyuk);
}

