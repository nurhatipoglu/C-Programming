#include<stdio.h>
#include<stdlib.h>
#include<time.h>
  int main(){
  	int dizi[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  	dizis(dizi);  

  }

  int dizis(int dizi[]){int kisi[13],i,j,k,a,b,c;	srand(time(NULL));
  	 
  
  
  	for(i=0;i<=13;i++){
    a=0;

    c=rand()%13;
	for(j=0;j<=13;j++)
    {
    	if(kisi[j]==dizi[c])
    	{	
    a=1;
    break;
		}
    	
	}
    if(a==0&&dizi[c]!=dizi[i])
    {
    	kisi[i]=dizi[c];
	}
	else i--;
    }
    
    
    for(i=0;i<=13;i++){
    printf("%d.person will receive a gift for %d.person",dizi[i],kisi[i]);
    printf("\n");
    }
    
    
    
    
    
    
  }
