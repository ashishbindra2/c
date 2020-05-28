//Addition and multiplication of 2 matrix


#include <stdio.h>

int main()
{
   int m, n, i, j ;
   int first[10][10], second[10][10], add[10][10];
   clrscr();
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");

   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
	 scanf("%d", &first[i][j]);

   printf("Enter the elements of second matrix\n");

   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
	    scanf("%d", &second[i][j]);

   printf("Sum of entered matrices:-\n");

   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
	 add[i][j] = first[i][j] + second[i][j];
	 printf("%d\t", add[i][j]);
      }
      printf("\n");
   }
   getch();
   return 0;
}
