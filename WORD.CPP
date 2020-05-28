#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char* nowords(int); char abc[20];
long number, temp;
int TenThousand, Thousand, Hundred, Tens, ones, Lakh;
printf("\nEnter the Number");
scanf("%ld", &number);
temp = number;
ones = temp % 10;
Tens = (temp % 100) / 10;
Hundred = (temp % 1000) / 100;
Thousand = (temp % 10000) / 1000;
TenThousand = (temp % 100000) / 10000;
Lakh = temp / 100000;
if (Lakh >= 1)
printf("%s Lakh ", strcpy(abc, nowords(Lakh)));
if (TenThousand >= 1)
{
printf("%s ", strcpy(abc, nowords(TenThousand * 10)));
printf("%s Thousand ", strcpy(abc, nowords(Thousand)));
}
else if (Thousand != 0 && TenThousand == 0)
{
printf("%s Thousand ", strcpy(abc, nowords(Thousand)));
}
if (Hundred >= 1)
printf("%s Hundred ", strcpy(abc, nowords(Hundred)));
printf("%s ", strcpy(abc, nowords(Tens * 10)));
printf("%s ", strcpy(abc, nowords(ones)));
getch();
}
char* nowords(n)
{
char word[20];
switch (n)
{
case 0:strcpy(word, "\0"); return word;
case 1:strcpy(word, "One"); return word;
case 2:strcpy(word, "Two"); return word;
case 3:strcpy(word, "Three"); return word;
case 4:strcpy(word, "Four"); return word;
case 5:strcpy(word, "Five"); return word;
case 6:strcpy(word, "Six"); return word;
case 7:strcpy(word, "Seven"); return word;
case 8:strcpy(word, "Eight"); return word;
case 9:strcpy(word, "Nine"); return word;
case 10:strcpy(word, "Ten"); return word;
case 11:strcpy(word, "Eleven"); return word;
case 12:strcpy(word, "Twelve"); return word;
case 13:strcpy(word, "Thirteen"); return word;
case 14:strcpy(word, "Fourteen"); return word;
case 15:strcpy(word, "Fifteen"); return word;
case 16:strcpy(word, "Sixteen"); return word;
case 17:strcpy(word, "Seventeen"); return word;
case 18:strcpy(word, "Eighteen"); return word;
case 19:strcpy(word, "Nineteen"); return word;
case 20:strcpy(word, "Tewnty"); return word;
case 30:strcpy(word, "Thirty"); return word;
case 40:strcpy(word, "Forty"); return word;
case 50:strcpy(word, "Fifty"); return word;
case 60:strcpy(word, "Sixty"); return word;
case 70:strcpy(word, "Seventy"); return word;
case 80:strcpy(word, "Eighty"); return word;
case 90:strcpy(word, "Ninety"); return word;
}
}