#include <stdio.h>
#include <locale.h>
#include <string.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	char kelime[500], cumle[500],ara;
	int i, say = 0,eb = 0,indis, bas = 0, bit, s = 0;
	printf("Cümle : ");
	gets(cumle);
	
	printf("Aranacak değer : ");
	scanf(" %c",&ara);
	
	for(i = 0; i < cumle[i] != '\0' ; i++)
	{
		if(cumle[i] == ara)
		{
			say++;
		}
		if(cumle[i] == ' ')
		{
			if(eb < say)
			{
				bit = i;
				eb = say;
				
				for(int j = i; cumle[j] != ' '; j--)
				{
					bas = j;
				}
			}
			say = 0;
		}
	}
	if(eb < say)
	{
		bit = i;
		eb = say;
		for(int j = i; cumle[j] != ' '; j--)
		{
			bas = j;
		}
	}
	for(int j = bas; j < bit; j++)
	{
		kelime[s] = cumle[j];
		s++;
	}
	
	printf("'%c' Harfi en çok '%s' Kelimesinde %d adet bulunuyor.",ara,kelime,eb);
}
