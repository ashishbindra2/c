#include<stdio.h>
 #include<conio.h>
 void main()
 {
 char CH;
 char ch;
 clrscr();
 printf("\nEnter a characterin uppercase  and lower: ");
 scanf("%c %c",&ch,&CH);
 ch=ch+32;
 CH=CH-32;
 printf("\ncharacter in lowercase and uppercase are = %c and %c",ch,CH);
 getch();
 }