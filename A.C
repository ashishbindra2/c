//reverce number with recorsive method
#include<stdio.h>
#include<conio.h>
void main()
{

	int no,rev;
	clrscr();
	printf("enter no\n");
	scanf("%d",&no);
	rev=reverce(no);
	printf("after rev is number is %d ",rev);
	getch();
}
int rev,sum=0;
int reverce(int no)
{
	if(no>0)
	{
		rev=no%10;
		sum=sum*10+rev;
		no=no/10;
		reverce(no);
	}
	return sum;
}