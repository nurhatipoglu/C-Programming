#include<stdio.h>
int main(){
	int N,i,j,s=1,x,k;
	srand(time(NULL));	
	printf("dizi boyutunu giriniz: ");
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++){
	    a[i]=rand()%10+1;
		printf("%d\t",a[i]);
	}
	for(i=0;i<N;i++){
		x=a[i];
	for(j=i+1;j<N;){
		
			if(a[i]==a[j]){for(k=j;k<=N;k++)
			{
			a[k]=a[k+1];
			}
			N--;
			s++;
		}else j++;
}
printf("\n %d elemani tekrar sayisi:%d ",x,s);
s=1;
}
}



