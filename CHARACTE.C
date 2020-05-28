#include<stdio.h>
int main()
{
 char line[80],ctr;
 int i,c,end=0,character =0,words=0,lines=0;
 printf("Press enter to return\n");
 while(end==0)
 {
  //read a line
  c=0;
  while((ctr=getchar())!='\n')
     line[c++]=ctr;
  line[c]='\0';
  //counting the line
  if(line[0]=='\0')
     break;
  else
  {
     words++;
     for(i=0;line[i]!='\0';i++)
	 if(line[i]==' '||line[i]=='\t')
	 words++;
  }
   //counting line and charater
   lines=lines+1;
   character=character +  strlen(line);
   }
   printf("\n");
   printf("lines=%d\n",lines);
   printf("words=%d\n",words);
   printf("charater=%d\n",character);

 getch();
 return 0;
}
