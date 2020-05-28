 #include<stdio.h>
 #include<conio.h>
// puch();
 //puuch();
 int a[9];
 int i,d,p1=0,p2=0,top=0,n,bot;
 void main()
 {
  clrscr();
  printf("Enter the number you want to perform\n");
  scanf("%d",&n);
  printf("Enter the array\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }       bot=n;
  while(top<bot){
	d=0;
	printf("Enter T(1) to b(2)");
	scanf("%d",&d);
	if(d==1)
	{
		p1=p1+a[top];
		printf("%d \n",p1);
		top++;
	}
	if(d==2)
	{
		p2=p2+a[bot-1];
		printf("%d\n",p2);
		bot--;
	}
}
if(p1>p2)
{
printf("P1 IS WIN");
}
else if(p1==p2)
{
 printf("EQUAL level");
}
else{
printf("p2 is winner");
}
getch();
}



















































































































