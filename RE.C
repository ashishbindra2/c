#include<stdio.h>
int main()
{
 int num,sub,i,k,j,mrk[10]={0},sum;
 char name[20][10],subj[20][20];
 clrscr();
 printf("Enter numbers of students:--\n");
 scanf("%d",&num);
 printf("Enter numbers of subjects:--\n ");
 scanf("%d",&sub);
 for(j=0;j<num;j++)
 {
	sum=0;
	printf("Enter name of the %d student \n",j+1);
	scanf("%s",name[j]);
	printf("Enter subjects names:--\n ");
	for(i=0;i<sub;i++)
		scanf("%s",subj[i]);
	printf("Enter marks of %s:-\n",name);
	for(i=0;i<sub;i++)
	{
		scanf("%d",&sum);
		mrk[j]+=sum;
	}

 }
       for(i=0;i<num;i++)
		printf("%s Total marks is %d \n",name[i],mrk[i]);

 getch();
 return 0;
}