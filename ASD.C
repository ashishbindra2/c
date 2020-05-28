#include<stdio.h>
#include<conio.h>
int i,a[10],q=2,pp=0,top=0,bot=8,j,p=0;
void main()
{

	clrscr();
	printf("enter 10 numbers for game ");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	fun();
	printf("\nscore of first player is = %d \n second player score is =  %d",p,pp);
	if(p>pp)
	printf("\nplayer one win");
	else
	printf("\npayer second win");
	getch();
}
fun(int q)
{
		if(q%2==0)
		{
			printf("\nfirst player turn\n");
			printf(" enter 1 for pick digit from top side\n");
			printf("enter 2 for pick digit from bottom side");
			scanf("%d",&j);
			if(j==1)
			{
				p=p+a[top];

				top++;
			}
			else if(j==2)
			{
				p=p+a[bot];
				bot--;
			}
			else
				printf("wrong input");
		}
		else
		{
			printf("\nsecond player turn\n");
			printf("enter 1 for pik digit from top side\n");
			printf("enter 2 for pick digit from bottom side");
			scanf("%d",&j);
			if(j==1)
			{

				pp=pp+a[top];
				top++;
			}
			else if(j==2)
			{

				pp=pp+a[bot];

				bot--;
			}
			else
			printf("wrong input");
		}
	if(top<=bot){
	q++;
	fun(q);  }


	return 0;
}