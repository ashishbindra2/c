#include<stdio.h>
#include<string.h>
int main()
{
 int n ,m[15]={0},sum,sub,i,j;
 char subject[10][11],name[20][11];
 clrscr();
  printf("Enter the number of student :-\n");
  scanf("%d",&n);
  printf("Enter the number of the subject:\n");
  scanf("%d",&sub);
  for(j=0;j<n;j++)
  {
	sum=0;
	printf("Enter thr Name of the student:\n");
	for(i=0;i<1;i++)
	{
		scanf("%s",&name[j]);
	}
	printf("Enter the name of the subject:\n");
	for(i=0;i<sub;i++)
	{
	 scanf("%s",&subject[i]);

	}
	printf("Enter the marks of %s\n",name[j]);
	for(i=0;i<sub;i++)
	{
	scanf("%d",&sum);
	m[j]=m[j]+sum;
	}

  }
  //printf("name \t Total marks\n");
  for(i=0;i<n;i++)
  {
	printf("%s \tmars %d \n",name[i],m[i]);
  }
 getch();
 return 0;
}