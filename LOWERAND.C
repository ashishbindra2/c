#include<stdio.h>
int main(){
  char str[20];
  int i;
  clrscr();
    printf("\nEnter any string->");
    scanf("%s",str);
    printf("\nThe string is->%s",str);
    for(i=0;i<strlen(str);i++){
	    if(str[i]>=97&&str[i]<=122){
	//    printf("%s\n",str);
	    str[i]=str[i]-32;
	    }
	    else
	    {
		str[i]=str[i]+32;
	    }
  }
     printf("\nThe string in upercase is->%s",str);

  getch();
  return 0;
}