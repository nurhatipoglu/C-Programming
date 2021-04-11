#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Struct{
	int x;
	int dizi1[9];
	int dizi2[9][15];
};

int main(){
	struct Struct sayi;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi.x);
	
	int i;
	for(i=0;i<10;i++){
		sayi.dizi1[i]=0;
	}
	
	int y4 = sayi.x/1000000000;   sayi.dizi1[0] =y4;
	sayi.x = sayi.x -(y4*1000000000);
	int y3 = sayi.x/100000000;    sayi.dizi1[1] =y3;
	sayi.x = sayi.x -(y3*100000000);
	int y2 = sayi.x/10000000;     sayi.dizi1[2] =y2;
	sayi.x = sayi.x -(y2*10000000);
	int y1 = sayi.x/1000000;      sayi.dizi1[3] =y1;
	sayi.x = sayi.x -(y1*1000000);
	int yuzbinler = sayi.x/100000; sayi.dizi1[4] =yuzbinler; 
	sayi.x = sayi.x -(yuzbinler*100000);
	int onbinler=sayi.x/10000;     sayi.dizi1[5]=onbinler; 
	sayi.x = sayi.x -(onbinler*10000);
	int binler = sayi.x/1000;      sayi.dizi1[6]=binler; 
	sayi.x = sayi.x -(binler*1000);
	int yuzler = sayi.x/100;       sayi.dizi1[7]=yuzler; 
	sayi.x = sayi.x -(yuzler*100);
	int onlar = sayi.x/10;         sayi.dizi1[8]=onlar; 
	sayi.x = sayi.x -(onlar*10);
	int birler = sayi.x;           sayi.dizi1[9]=birler;
	
	for(i=0;i<10;i++){
    	printf("%d",sayi.dizi1[i]);
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		switch(sayi.dizi1[i]){
			case 0: strcpy(sayi.dizi2[i],"sifir"); break;
			case 1: strcpy(sayi.dizi2[i],"bir"); break;
		    case 2: strcpy(sayi.dizi2[i],"iki");break;
		    case 3: strcpy(sayi.dizi2[i],"uc");break;
			case 4: strcpy(sayi.dizi2[i],"dort");break;
			case 5: strcpy(sayi.dizi2[i],"bes");break;
			case 6: strcpy(sayi.dizi2[i],"alti");break;
			case 7: strcpy(sayi.dizi2[i],"yedi");break;
			case 8: strcpy(sayi.dizi2[i],"sekiz");break;
			case 9: strcpy(sayi.dizi2[i],"dokuz");break;
		}
	}

	for(i=2;i<=8;i=i+3){
	switch(sayi.dizi1[i]){
		case 1: strcpy(sayi.dizi2[i],"on"); break;
		case 2: strcpy(sayi.dizi2[i],"yirmi");break;
		case 3: strcpy(sayi.dizi2[i],"otuz");break;
		case 4: strcpy(sayi.dizi2[i],"kirk");break;
		case 5: strcpy(sayi.dizi2[i],"elli");break;
		case 6: strcpy(sayi.dizi2[i],"altmis");break;
		case 7: strcpy(sayi.dizi2[i],"yetmis");break;
		case 8: strcpy(sayi.dizi2[i],"seksen");break;
		case 9: strcpy(sayi.dizi2[i],"doksan");break;
	    }
	}
	
	if(!(strcmp(sayi.dizi2[1],"bir")&&strcmp(sayi.dizi2[4],"bir")&&strcmp(sayi.dizi2[7],"bir")))
	printf("%s milyar yuz %s %s milyon yuz %s %s bin yuz %s %s",sayi.dizi2[0],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[8],sayi.dizi2[9]);
	
	else if(!(strcmp(sayi.dizi2[1],"bir")&&strcmp(sayi.dizi2[4],"bir")))
	printf("%s milyar yuz %s %s milyon yuz %s %s bin %s yuz %s %s",sayi.dizi2[0],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[7],sayi.dizi2[8],sayi.dizi2[9]);
	else if(!(strcmp(sayi.dizi2[1],"bir")&&strcmp(sayi.dizi2[7],"bir")))
	printf("%s milyar yuz %s %s milyon %s yuz %s %s bin yuz %s %s",sayi.dizi2[0],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[8],sayi.dizi2[9]);
	else if(!(strcmp(sayi.dizi2[4],"bir")&&strcmp(sayi.dizi2[7],"bir")))
	printf("%s milyar %s yuz %s %s milyon yuz %s %s bin yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[8],sayi.dizi2[9]);
	
    else if(!(strcmp(sayi.dizi2[1],"bir")))
	printf("%s milyar yuz %s %s milyon %s yuz %s %s bin %s yuz %s %s",sayi.dizi2[0],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[7],sayi.dizi2[8],sayi.dizi2[9]); 
    else if(!(strcmp(sayi.dizi2[4],"bir")))
	printf("%s milyar %s yuz %s %s milyon yuz %s %s bin %s yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[7],sayi.dizi2[8],sayi.dizi2[9]);
	else if(!(strcmp(sayi.dizi2[7],"bir")))
	printf("%s milyar %s yuz %s %s milyon %s yuz %s %s bin yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[8],sayi.dizi2[9]);
	
	else 
	printf("%s milyar %s yuz %s %s milyon %s yuz %s %s bin %s yuz %s %s",sayi.dizi2[0],sayi.dizi2[1],sayi.dizi2[2],sayi.dizi2[3],sayi.dizi2[4],sayi.dizi2[5],sayi.dizi2[6],sayi.dizi2[7],sayi.dizi2[8],sayi.dizi2[9]);
}