#include<stdio.h>
#include<conio.h>
int i,a[10],q,p2=0,top=0,bot=9,j,p1=0;
fun(int q)
{

		if(q%2==0)
		{
			printf("First player turn\n");
			printf("Enter 1 from top 2 from bottom");
			scanf("%d",&j);
			if(j==1)
			{       p1=p1+a[top];
				top++;
			}
			else if(j==2)
			{
				p1=p1+a[bot];
				bot--;
			}
			else
			{
				q--;
				printf("Wrong input");
			}
		}
		else
		{
			printf("Second player turn\n");
			printf("Enter 1 from top 2 from bottom");
			scanf("%d",&j);
			if(j==1)
			{
				p2=p2+a[top];
				top++;
			}
			else if(j==2)
			{
				p2=p2+a[bot];
				bot--;
			}
			else
			{
				q--;
				printf("wrong input");
			}
		}
		if(top<=bot)
		{
			q++;
			fun(q);

		}
	return 0;
}
int main()
{

	clrscr();
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	fun(2);
	printf("Score of first player is = %d \n second player score is =  %d\n",p1,p2);
	if(p1>p2)
	 printf("Player \"first win\"\n");
	else if(p2>p1)
	 printf("Player \"second win\"\n");
	else
	 printf("Score level");
getch();
return 0;
}
