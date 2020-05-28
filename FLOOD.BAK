#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <DOS.h>

void flood_fill(int,int,int,int);
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C://turboC3//BGI");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }
   circle(100,50,35);
    flood_fill(101,51,BLACK,WHITE);
   getch();
   closegraph();
   return 0;
}
void flood_fill(int x,int y,int oldColor,int newColor)
{

   if(getpixel(x,y)==oldColor)
   {
	putpixel(x,y,newColor);
       flood_fill(x-1,y,oldColor,newColor);
       flood_fill(x+1,y,oldColor,newColor);
       flood_fill(x,y-1,oldColor,newColor);
       flood_fill(x,y+1,oldColor,newColor);

   //    flood_fill(x-1,y-1,oldColor,newColor);
   //    flood_fill(x+1,y-1,oldColor,newColor);
   //    flood_fill(x-1,y+1,oldColor,newColor);
   //    flood_fill(x+1,y+1,oldColor,newColor);
   }
}

