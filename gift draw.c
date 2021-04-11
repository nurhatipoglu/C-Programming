#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

func(char dizi[][100])
{
	srand(time(NULL));
	char dizi1[10][100];
	int k,rnd,s, kontrol[100],kmt,l;
	
	for(int i = 0; i < 10; i++)
	{
		k = 0;
		rnd = rand() % 10;
		for(int j = 0; j < i; j++)
		{
			if(strcmp(dizi1[j],dizi[rnd]) == 0)
			{
				k = 1;
				break;
			}
		}
		if(k == 0 && dizi[rnd] != dizi[i])
		{
			strcpy(dizi1[i],dizi[rnd]);
		}
		else
		{
			i--;
		}
	}
	printf("Hediye Listesi ;\n\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%s ---> %s \n",dizi[i],dizi1[i]);
	}
}

int main()
{
	srand(time(NULL));
	char dizi[10][100] = {"Nur","Cagla","Cenk","Nisa","Nil","Elif","Tugay","Hasan","Arda","Eda"};
	
	func(dizi);
}
