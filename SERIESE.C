#include<stdio.h>
int main()
{
 int i,j,n,a=1;
 char ch;
 clrscr();
 printf("\n Enter the number :");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
     ch='A';
      for(j=1;j<=i;j++){
	printf(" %d %c",a,ch);
	ch++;
	a++;
      }
      printf("\n");
 }
getch();
return 0;
}