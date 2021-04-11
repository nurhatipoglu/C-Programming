#include<stdio.h>
#include<stdlib.h>

int main(){
	transpoze(3,3);
}
int transpoze(int a,int b){
	int matris[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matris[j][i]==matris[i][j];
		}
    }

    printf("Transpozu\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matris[j][i]);
		}
		printf("\n");	
    }
	
	
}

