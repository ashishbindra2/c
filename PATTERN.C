#include<stdio.h>
#include<conio.h>
void main()
{
        int i,n,j;
        clrscr();
        printf("\n Please Give The Value of N:  ");
        scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=0;j<n-i;j++)
	    printf("  ");
	    for(j=i;j>1;j--)
	    printf(" %d",j);
	    for(j=1;j<=i;j++)
	    printf(" %d",j);
	    printf("\n");
	}
	getch();
}