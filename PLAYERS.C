 #include<stdio.h>
 int p1(int);
 p2();

 int main()
 {
  int a[9];
 int i,d,p1=0,p2=0,top=0,n,bot;
  clrscr();
  printf("Enter the number you want to perform\n");
  scanf("%d",&n);
  printf("Enter the array\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
    bot=n;
    while(top<bot){
	d=0;
	printf("Enter L(1) to R(2)");
	scanf("%d",&d);
	 p1(d);
		printf("%d \n",p1());
		printf("%d\n",p2());

}
if(p1>p2)
{
printf("P1 IS WIN");
}
else if(p1==p2)
{
 printf("Scrore level");
}
else{
printf("p2 is winner");
}
getch();
return 0;
}
lo(){
if(bot-top<0)
{
return (p1,p2);
}
	if(x==1)
	{
		p1=p1+a[top];
		return (top+1,p1);
	}
	if(x==2)
	{
		p2=p2+a[bot-1];
		return (p2,bot-1);
	}

}
//  return  }