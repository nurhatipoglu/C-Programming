#include <stdio.h>
/* 
Program fonk1() ve fonk2() fonksiyonlarını sırasıyla üçer kez çağırarak lokal olarak tanımlanmış değişken değerlerini
ekrana yazdırır. Her iki fonksiyonda da lokal değişken değerleri artırılmasına rağmen sadece fonk2() fonksiyonu içindeki 
id1 değişkeni bir önceki fonksiyon çağrısında aldığı değeri korumaktadır. Bu olanağı sağlayan değişkenin statik tanımlanmış
olmasıdır.
*/

void fonk1 (void);
void fonk2 (void);

main()
{
  fonk1();
  fonk2();

  printf("\n");

  fonk1();
  fonk2();
  
  printf("\n");

  fonk1();
  fonk2();
}

void fonk1 (void)
{
  int id1 = 1;

  printf("%d ", id1);
  id1 = id1 + 5;
  printf("%d ", id1);
}

void fonk2 (void)
{
  static int id1 = 0;

  printf("%d ", id1);
  id1 = id1 + 9;
  printf("%d ", id1);
}
