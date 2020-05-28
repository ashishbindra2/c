      #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int num,i,j;
      char name[20][10],temp[10],tname[20][20];
      clrscr();
      printf("Enter how many names u want to sort\n");
      scanf("%d",&num);
      printf("Enter names\n");
      for(i=0;i<num;i++)
      {
		scanf("%s",name[i]);
		strcpy(tname[i],name[i]);
      }
      for(i=0;i<num;i++)
      {
		for(j=i+1;j<num;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
      }
      printf("\n----------------------------------\n");
      printf("Before short Shorted list\n");
      for(i=0;i<num;i++)
      {
		printf("%s \t\t %s\n",tname[i],name[i]);
      }
      printf("\n------------------------------------\n");
      getch();
      }