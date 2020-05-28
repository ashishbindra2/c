#include<stdio.h>
#include<string.h>
int main()
{
	char a[120];
	int i,space=0,word=0,lines=0;
	clrscr();
	printf("Enter the string\n");
	scanf("%[^;]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
		      space++;
		}
		if(a[i]=='\n')
		      lines++;
		if((a[i]==' ')||(a[i]=='\n'))
		  word++;
	}

	i=i-lines;
	lines++;  word++;
	if(a[0]==0)
	{
		word=0;
		lines=0;
	}

	printf("Thr number of words sre: %d\n",word);
	printf("The number of lines are: %d\n",lines);
	printf("The numbers of spaces are: %d and charaters are: %d",space,i);
getch();
return 0;
}