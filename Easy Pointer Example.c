#include <stdio.h>
main()
{
	int i=5;
	int iptr;
	iptr=&i;
	
	printf("iptr gösterdigi deer=%p\n",iptr);
	//++iptr;
	printf("iptr gösterdigi deger=%d",++(iptr));
	
//	printf("iptr gösterdigi deer=%p\n",iptr);
	
	//printf("iptr gösterdigi deger=%d\n",iptr);
	//printf("iptr gösterdigi deger=%d",++(iptr));
  	
  	//printf("iptr gösterdiği değer=%d\n",iptr);
	
}