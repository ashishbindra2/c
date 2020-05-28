//GAME
#include<stdio.h>
int main(){
int a[22],Start,End,i,u1=0,u2=0,n,e,s;
char b='f';
clrscr();
	printf("Enter the number for game\n");
	scanf("%d",&n);
	printf("Enter there values\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	Start=1; End=n;
		while(End>Start)
		{
			e=End;s=Start;i=1;
			printf("\nChosse from left or from right \n");
			if(e!=End)
			{
			 for(i=1;i<=n-1;i++)
			 {
			   printf("%d \t",a[i]);
			 }
			}
			else if(s!=Start)
			{
			 for(i=i+1;i<=n;i++)
			 {
			  printf("%d \t",a[i]);
			 }
			}
			else
			{  for(i=1;i<=n;i++)
			   printf("%d \t",a[i]);
			}
		printf("for left press f and for right pres e \n");
		scanf("%c",&b);
		 if(b=='f')
		  {
		  u1= u1+a[Start];
		   Start++;
		  }
		  else
		  {
		  u2=u2+a[End];
		  End--;
		  }
	}
	printf("score of user1 and user 2 are:--\n",u1,u2);
	if(u1>u2)
	{
	 printf("user 1 is win\n");
	}
	else
	{
	 printf("User 2 is win\n");
	}
getch();
return 0;
}