#include<stdio.h>
int main()
{
int i,n,temp,r=0;
printf("Enter the value of n");
scanf("%d",&n);
temp=n;
while(n!=0){
r=r*10;
r=r+n%10;
n=n/10;
}
if(r==temp)   {
 printf("is the nummer ");
 }
else
{
printf("not");    }
printf("Reverse of number is %d",r);
getch();
return 0;
}