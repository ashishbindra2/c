#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void acircle(int,int,int,int);

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }

//   line(0, 0, getmaxx(), getmaxy());
   acircle(200,200,124,6);

   getch();
   closegraph();
   return 0;
}
void acircle(int h,int k,int r,int c)
{
int x = 0;
int y = r;
put_circle_pixel(h,k,x,y,c);
while(x<=y)
{
  x = x+1;
  y = sqrt(r*r-x*x);
  put_circle_pixel(h,k,x,round(y),c);
}
}
