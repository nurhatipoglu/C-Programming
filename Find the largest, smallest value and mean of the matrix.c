#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int matris[10][10];
	int i,j;
	int enbuyuk,enkucuk,toplam,atama,ortalama,x=0;
	
	srand(time(NULL));
	printf("Matris:\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
	 matris[i][j]=rand()%10;
	 printf("%3d",matris[i][j]);
        } 
        printf("\n");
    }	
    
    enbuyuk=matris[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){	
			if(matris[i][j]>enbuyuk){
				enbuyuk=matris[i][j];
			}	
	}	
}
        printf("Matrisin en buyuk degeri: %d",enbuyuk);			
		printf("\n");
		
		enkucuk=matris[0][0];
    	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(matris[i][j]<enkucuk){
				enkucuk=matris[i][j];
			}	
	}	
}
printf("Matrisin en kucuk degeri: %d",enkucuk);
printf("\n");
        for(i=0;i<10;i++){
		for(j=0;j<10;j++){	
			atama=matris[i][j];
			toplam+=atama;
			ortalama=toplam/100;
	}	
}
printf("Matrisin ortalama degeri %d",ortalama);
}

