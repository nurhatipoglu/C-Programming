#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	FILE *fileptr;
	FILE *fileptr1;
	int sayi,m=0,i=0,j=0,k,l,n=0,s=0,o=0;
	char kelime[30],dosyakelime[10][30],dosyaninAdi[20],dosyakelime2[10][30],istenen[30],karakter[100];
	
	printf("1-Kaydet\n"
		   "2-Oku\n"
		   "3-Karşılaştır\n"
		   //"4-Bul\n"
		   "4-Menü çıkışı\n"
		   "İstediğiniz işlem için sayı giriniz:");//Seçenekleri ekrana yansıtır.
	scanf("%d",&sayi);
	
	while( sayi!=4 ){ //4(Menü çıkışı istenene) girilene kadar bu döngü dönsün.
		switch( sayi ){ //switch case ile girilen sayılara göre işlem gerçekleştiriyorum.
			case 1:
				if( (fileptr = fopen("soru2.txt","a")) == NULL) printf("Dosya Açılamadı.\n"); //Dosyayı ekleme modu ile açar, açılmadıysa açılmadı yazısını ekrana basar.
				else{
					printf("Kelimeyi giriniz:");
	                scanf(" %[^\n]s",kelime); //Kelime gireriz.
	                fprintf(fileptr,"%s\n",kelime);//Girilen kelimeyi dosyaya yazar.
	                fclose(fileptr);
	                printf("\n");
	                
	                printf("İstediğiniz işlem için sayı giriniz:");
	                scanf("%d",&sayi);
				}
				break;
            case 2:
			    if( (fileptr = fopen("soru2.txt","r")) == NULL) printf("Dosya Açılamadı.\n");//Dosyayı okuma modu ile açar, açılmadıysa açılmadı yazısını ekrana basar.
				else{
					while( !feof(fileptr) ){ //Eğer dosyanın sonuna gelinmediyse while döngüsü çalışsın.
						fscanf(fileptr," %s",&dosyakelime[m]);//Dosyaki bilgileri okur.
						printf("%s\n",dosyakelime[m]);//Dosyadaki bilgileri ekrana(kondola) yazar.
						m++;
					}
	                fclose(fileptr);
	                printf("\n");
	                
	                printf("İstediğiniz işlem için sayı giriniz:");
	                scanf("%d",&sayi);
				}
				break;
			case 3:
			    printf("Karşılaştırmak istenen dosyanın adını giriniz (a.txt):");
				scanf(" %s",&dosyaninAdi);	
				if ( (fileptr1 = fopen(dosyaninAdi,"r")) && (fileptr = fopen("soru2.txt","r")) ==NULL) printf("Dosya Açılamadı\n");
				//Dosyaları okuma modu ile açar, açılmadıysa açılmadı yazısını ekrana basar.
				else{
					while( !feof(fileptr) ){ //Eğer dosyanın sonuna gelinmediyse while döngüsü çalışsın.
						fscanf(fileptr," %s",&dosyakelime[i]);//soru2.txt dosyasından bilgileri okur
						i++;
					}
					printf("%s dosyasının içindekiler:\n",dosyaninAdi);
				    while( !feof(fileptr1) ){ //Eğer dosyanın sonuna gelinmediyse while döngüsü çalışsın.
						fscanf(fileptr1," %s",&dosyakelime2[j]);//a.txt dosyasından bilgileri okur
						printf("%s\n",dosyakelime2[j]);//a.txt dosyasındaki bilgileri ekrana yazar.
						j++;
					}
					printf("\n");
				
				for(k=0; k<i; k++){
					for(l=0; l<j;l++){
					    if( (strcmp(dosyakelime[k], dosyakelime2[l])) == 0 ){//İki dosyadaki satırları karşılaştırır hangisi aynıysa bunu ekrana yazar.
						printf("soru2.txt dosyasındaki aynı satır: %s\n",dosyakelime[k]);
						printf("%s dosyasındaki aynı satır: %s\n",dosyaninAdi,dosyakelime2[l]);
						printf("İki dosyada sırasıyla %d. ve %d. satır aynıdır.\n",k+1,l+1);
					    }
					}
					
				}
				fclose(fileptr);
				fclose(fileptr1);
		
				printf("İstediğiniz işlem için sayı giriniz:");
	            scanf("%d",&sayi);
				}
				break;
			/*case 4:
				if(fileptr = fopen("soru2.txt", "r") ==NULL) printf("Dosya Açılamadı\n");	//Dosyayı okuma modu ile açar, açılmadıysa açılmadı yazısını ekrana basar.
				else{
					printf("Dosyada bulmak istediğiniz kelimeyi giriniz:");
				    printf(" %s",istenen);  //Dosya içinde aradığımız kelime veya heceyi girer.
				    
				    fscanf(fileptr,"%c",&karakter[o]); //İlk karakteri dosyadan okur.
				    while( strlen(karakter)>o){
				    	if( istenen[n] == karakter[o] ){ //klavyeden girdiğimin n. indisi dosyadan okuduğum harfe eşit ise;
				            if(n==0){
				        	    o++;
				    	        while( n == strlen(istenen) -1 ){ //istenenin son indisine gelene kadar,karakter okumaya devam et.
				    		        fscanf(fileptr,"%c",&karakter[o]); 
				    		        if(istenen[n] == karakter[o]){
				    			        if( n == strlen(istenen)-1 ){/*Eğer istenenin son indisine kadar geldiysek istenendeki tüm harfler dosyada vardır, 
										                    eğer bu if e ne kadar girerse istenen o kadar vardır,bu işlemi sayaç kontrol eder./
				    				        s++;
				    				        o++;
				    				        n=0;
								        }
								        else{
									        o++;
									        n++;
								        }
						     	    }
						        }
					        }
						}
						
					    else{
						    o++;
						    n=0;
						    fscanf(fileptr,"%c",&karakter[o]); //Eğer istenenin ilk indisi okuduğum karaktere eşit değilse eşit olana kadar dosyadan karakter okumasını sağlar.
				        }
					}
				    
				if( s!=0 ){
					printf("Dosyada %s , %d tane vardır.",istenen,s);
				}
				else{
					printf("Aranan, dosyada bulunamadı.");
				}
		     	break;
				
		    }*/
	    }
	    
    }
}
