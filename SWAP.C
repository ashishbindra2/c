//To swap two number without using temp
#include <stdio.h>
int main()
{
  int x , y;
  clrscr();
  printf("Enter the value of x & y ");
  scanf("%d %d",&x,&y);

  y = x + y-(x=y); // 5+6-6

  printf("After Swapping: x = %d, y = %d", x, y);
  getch();
  return 0;
}