#include<stdio.h>
#include<conio.h>
void auth(char,int);
void main()
{
 int p;
 char user_name[20];
 clrscr();
 printf("Enter the user name: ");
 gets(user_name);
 printf("Enter the password");
 scanf("%d",&p);
 auth(user_name[20],p);
 getch();
}
void auth(char user_name,int p)
{
char un[20]="ashish";
int pass=123;
if(user_name==un[20]&&p==pass){
printf("Valid user");
}
else{
printf("invalid user");

}

}