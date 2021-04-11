#include <stdio.h>
 
int main() {
    register int i;/*Register tipi değişkenlerin tanımlanma ve kullanılma nedeni, programın daha etkin ve daha hızlı çalışır
	                 hale getirilme isteğidir.*/
    int sayilar[6] = {11, 22, 33, 44, 55, 66};
    for (i = 0; i < 6; i++) {
        printf("sayilar[%d] degeri: %d \n", i, sayilar[i]);
    }
    return 0;
}
