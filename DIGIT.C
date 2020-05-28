//W.A.P to add the digit of given number
#include<stdio.h>
int main(){
	int n,temp,digit,sum=0;
	clrscr();
	printf("Enter the number \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
		{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
		}
		printf("Given number =%d \n",temp);
		printf("Sum of the digits %d=%d\n",temp,sum);
	getch();
	return 0;
	}