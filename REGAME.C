//GAME
#include<stdio.h>
int x[]={1,2,3,4,5,6,7,8,9,10};
int top=0,bottom=9,i,n1=2,n2=0,n,sum1=0,sum2=0;
void fun();
void player1();
void player2();
int main(){

//char b='f';
clrscr();
     fun();
     if(sum1>sum2)
	 printf("\nPlayer 1st win");
     else
	  printf("\nPlayer 2nd win");

getch();
return 0;
}
void fun()
{
	while(bottom>=top)
	{
	   if(n1%2==0)
	   {
		 printf("\nTurn of player1\n");
		 if(x[top]>x[bottom])
		 {
			sum1=sum1+x[top];
			top++;
		 }
		 else{
			sum2=sum2+x[bottom];
			bottom--;
		 }
	     }
	     player2();
	}
}
 void player2()
 {
  while(top<=bottom)
  {
    printf("\nturn of player2");
    if(x[top]>x[bottom])
    {
	sum2=sum2+x[top];
	top++;
    }
    else{
	sum2=sum2+x[bottom];
	bottom--;
    }
    fun();
  }
 }