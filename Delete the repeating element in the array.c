#include<stdio.h>
int main(){
    
	int N,i,j,k;
	srand(time(NULL));	
	printf("Enter the array size: ");
	scanf("%d",&N);
	int a[N];
	for(i=0;i<=N;i++){
	  a[i]=(1+rand()%10);
		printf("%d\t",a[i]);
	}
	for(i=0;i<N;i++){
	for(j=i+1;j<N;){
		
			if(a[i]==a[j]){
			for(k=j;k<=N;k++)
			{
			a[k]=a[k+1];
			}
			N--;
		
		}else j++;
	}
}

for(i=0;i<N;i++){
	printf("\n %d. element: %d",i,a[i]);
}
}