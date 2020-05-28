//reverce number with recorsive method
#include<stdio.h>

int main()
{

	int num,rnum;
	clrscr();
	printf("Enter the numbers\n");
	scanf("%d",&num);
	rnum=reverce(num);
	printf("After rev is number is %d ",rnum);
	getch();
	return 0;
}
int rnum,sum=0;
int reverce(int num)
{

	if(num>0)
	{
		rnum=num%10;
		sum=sum*10+rnum;
		num=num/10;
		reverce(num);
	}
	return sum;
}