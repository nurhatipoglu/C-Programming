#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void string(char** dizi){
	dizi = (char*)malloc(sizeof(char) * 15);
    char sesli[6]="aeiou";
    char sessiz[19]="bcdfghjklmnprstvyz";
    int i,j,k;
    srand(time(NULL));
        for(i=0;i<15;i++){
        	dizi[i] = (char*)malloc(6 * sizeof(char));
    	   for(j=0;j<6;j++){
    	       if(j%2==0) {
                k=rand()%18;
                dizi[i][j] = sessiz[k];
               } 
               if(j%2==1) {
                k=rand()%5;
                dizi[i][j] = sesli[k];
               }
		   }
        }
        for(i=0;i<15;i++){
    	    for(j=0;j<6;j++){
    		    printf("%c",dizi[i][j]);
		    }
		printf("\n");
	    }	
}

void ID(int *sayi){
	srand(time(NULL));
	sayi = (int*)malloc(15 * sizeof(int));
	int i;
	for(i=0;i<15;i++){
		*(sayi+i)=20+rand()%80;
		printf("%d ",*(sayi+i));
	}
	printf("\n");
}

void IDSirala(int *sayi){
	int i,j,temp;
	 FILE *myptr;
	 for(i=0;i<15;i++){
    	for(j=i+1;j<16;j++){
		    if((sayi+i)>(sayi+j)){
	    	temp = *(sayi+i);
	    	*(sayi+i) = *(sayi+j);
	    	*(sayi+j) = temp;
	        }
		}
	    
    }
    myptr = fopen("ornek1.txt","w");
    for(i=0;i<15;i++){
    	fprintf(myptr,"%d",*(sayi+i)); //dosyaya yazma.
	}
	fclose(myptr);
	
	int s[15];
	myptr = fopen("ornek1.txt","r");
	for(i=0;i<15;i++){
		fscanf(myptr,"%d",&s[i]);//dosyadan okuma.
		printf("%d",s[i]);
	}
    fclose(myptr);
}

void stringSirala(char **dizi){
	int i,j;
	char *temp2;
	FILE *myptr;
	for(i=0;i<15;i++){
    	for(j=i+1;j<16;j++){
    		if((dizi[i]>dizi[j])>0){
    			strcpy(temp2,dizi[i]);
    			strcpy(dizi[i],dizi[j]);
    			strcpy(dizi[j],temp2);
			}
		}
	}
	myptr = fopen("ornek2.txt","w");
	for(i=0;i<15;i++){
		for(j=0;j<6;j++){
			fprintf(myptr,"%[^\n]s",dizi[i]); //dosyaya yazdÄ±rma.
		}
		printf("\n");
	}
	fclose(myptr);
	
	char d[15][6];
	for(i=0;i<15;i++){
		fscanf(myptr,"%[^\n]s",d[i]);
		printf("%s",d[i]);
    }
}

int main(){
    char **arr;
    string(arr);

    int *sayi;
    ID(sayi);
    
    IDSirala(sayi);
    
    stringSirala(arr);
}