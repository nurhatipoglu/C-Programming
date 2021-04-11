#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rastgele(int **matris,int satir,int sutun){
	int min,max,i,j;
	printf("Sirasiyla min ve max degerlerini giriniz:\n");
	scanf("%d%d",&min,&max);
	printf("\tMatris\n");
	for(i=0 ;i<satir; i++){
		for(j=0 ;j<sutun; j++){
			matris[i][j] = rand()%(max-min) +min;
		}
	}
	
	for(i=0 ;i<satir; i++){
		for(j=0 ;j<sutun; j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
}


int topla(int **matris,int x,int b){
	int j,sum=0;
	for(j=0;j<b;j++){
		printf("%d  ",matris[x-1][j]);
		sum += matris[x-1][j];
	}
	return sum;
}


int max2bul(int **matris,int a,int b){
	int i,j,eb=0,eb2=0,*ebadres;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(matris[i][j]>eb){
				eb = matris[i][j];
				ebadres = (matris[i]+j);
			}
		}
	}
	
	/*Matriste 1.en büyük elemanın aynısı var ise o değeri 0 yaparız ki 2.en büyük elemanı bulalım(yoksa 2. büyük eleman 
	yine en büyük elemanın değeri çıkar.*/
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(eb == matris[i][j]){
				*(matris[i]+j) = 0;
			}
		}
	}
	
	eb = 0; //En büyüğün değeri sıfırlanır ki 2. en büyük değeri bulalım.
	*ebadres = 0; /*En büyüğün olduğu adresteki matris değeri sıfırlanır artık en büyük değildir.Yeni matristeki en büyük 
	değer matrisimizdeki en buyuk 2.degerdir.*/
	
	//Buradaki kodumuz en buyuk deger veya degerler 0 lanmış mı diye kontrol amaçlı yazılır.
	/*printf("\tYeni matris\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	} */
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(matris[i][j]>eb){
				eb = matris[i][j];
			}
		}
	}
	return eb;
}



int main(){
	srand(time(NULL));
	int **matris;
	int satir,sutun;
	printf("Sirasiyla satir ve sutun sayisini giriniz:\n");
	scanf("%d%d",&satir,&sutun);
	
	/*Diziye işaret eden işaretçiler iki boyutludur bu sebepten int** ifadesi kullanılır ve her bir satır başını tutacak dizi
	için yer ayrılır. */
	matris = (int**)malloc(sizeof(int*) *satir);
    
    /*Her bir satır başı için sutun sayısı kadar yer ayırmamız gereklidir ki matrisin her bir elemanını depolayacak kadar 
	alanımız olsun. Her bir satır için sutun sayısı kadar yer ayrılır. */
	int i;
	for(i=0 ;i<satir; i++){
		matris[i] = (int*)malloc(sizeof(int) *sutun);
	}
	
	//a şıkkı kod :
	rastgele(matris,satir,sutun);
	
	//Verilen satırdaki elemanların toplamını bulan kod:
	int x;
	printf("Hangi satirdaki elemanlarinin toplamini istediginizi giriniz:\n");
	scanf("%d",&x);
	int sum = topla(matris,x,sutun);
	printf("--> %d.satirdaki elemanlarin toplami= %d\n",x,sum);
	
	printf("\n");
	//b şıkkı kod:
	int max2 = max2bul(matris,satir,sutun);
	printf("2.en buyuk deger= %d\n",max2);
	
	free(matris);
}

