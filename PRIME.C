/* Program to print prime numbers */
	#include<stdio.h>
	void main()
	{
	int n,i,j,pr=0;
	clrscr();
	     printf("Enter any number \n");
	     scanf("%d",&n);
	     if(n<=1){
		printf("%d Not a prime number",n);
		}
	     else{
	     printf(" All prime numbers are -\n");
	     for(i=2;i<=n;i++)
	     {
		     pr=0;
		     for(j=2;j<i;j++)
		     {
			     if(i%j==0)
			     {
				       pr=1;
				       break;
			     }
		     }
		     if(pr==0)
		     {
			 printf("%d \t",i);
		     }
	     }
	       }
	     getch();
	}