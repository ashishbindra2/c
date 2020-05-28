#include<stdio.h>
#include<conio.h>
fun();
int ak=0,al=0,i=0,b=0,j,sum=0,sm=0,c;
int a[5]={12,34,50,25,59},n=5,goal=84,i;
main()
{


	clrscr();
	printf("Elements Are :->");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	j=n-1;
	c=j;
	i=0;
	printf("\nOur Goal :%3d",goal);
	printf("\n____________________________________________________\n");
	fun();
	getch();
}

fun()
{
	sum=sum+a[i];
	if(sum==goal)
	{
		if(al==0)
		{
			printf("\nSubset is");
			al++;
		}
		for(b;b<=i;b++)
		printf("%4d ",a[b]);
	}
	if(sum>goal)
	{
		sum=sum-a[b];
		b++;
		if(sum==goal)
		{
			if(al==0)
			{
				printf("\nSubset Is....");
				al++;
			}
			for(b;b<=i;b++)
			printf(" %4d ",a[b]);


		}

	}
	i++;
	sm=sm+a[j];
	if(sm==goal)
	{       if(ak==0)
		{
			printf("\nSubset is ");
			ak++;
		}
		for(c;c>=j;c--)
		printf("%4d",a[c]);

	}
	if(sm>goal)
	{
		if(ak==0)
		{
			printf("\nSubset is... ");
			ak++;
		}
		sm=sm-a[c];
		c--;
		if(sm==goal)
		{       if(ak==0)
			printf("\nSubset si ..");
			for(j;j<=c;j++)
			printf("%4d",a[j]);

		}
	}
	j--;
	if(i<n)
	fun();
}
