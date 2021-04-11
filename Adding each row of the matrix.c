/*

Adding each row of the matrix

*/

#include <stdio.h>

int main()

{

int row=3;

int column=3;

int matrix[row][column];

int i,j,r,c;

int sum,product;

printf("\nEnter matrix elements :\n");

for(i=0;i< row;i++)

{

for(j=0;j< column;j++)

{

printf("Enter element [%d,%d] : ",i,j);

scanf("%d",&matrix[i][j]);

}

}

printf("\n");

/*sum of all rows*/

for(i=0;i< row;i++)

{

sum=0; /*initializing sum*/

for(j=0;j< column;j++)

{

printf("%d\t",matrix[i][j]); /*print elements*/

sum += matrix[i][j];

}

printf("\tSUM : %d",sum);

printf("\n"); /*after each row print new line*/

}

}