#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void  directline(int x1, int y1, int x2 ,int y2,int col );
int main(void)
{ //  int x1,x2,y1,y2;
int i;
     int x1[13] = {100,100,300,200,100,300,100,100,100,300,100,200,100};
     int y1[13] = {100,100,200,300,200,100,100,100,200,100,100,100,300};
     int x2[13] = {300,200,100,100,300,100,100,300,100,100,100,100,200};
     int y2[13] = {200,300,100,100,100,200,200,100,100,100,100,300,100};
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }
   // printf("Enter the value of x1 and y1 \n");
   // scanf("%d %d",&x1,&y1);
  //  printf("Enter the value of x2 and y2 \n");
  //  scanf("%d %d",&x2,&y2);
   /* draw a line */
  // line(0, 0, getmaxx(), getmaxy());

  for(i=0;i<13;i++){
   setcolor(RED);
   line(x1[i],y1[i],x2[i],y2[i]);
   printf("\n (%d, %d) to (%d, %d)",x1[i],y1[i],x2[i],y2[i]);
   directline(x1[i], y1[i], x2[i],y2[i], i+1);
   getch();
   }
       //640*480    upper 0,0 lower 639,479
  //   circle(120,300,40);
    // circle(488,300,40);                                       //input
   /* clean up */                                              //setcolor(RED)
   getch();
   closegraph();
   return 0;
}

 void directline(int x1 ,int y1 ,int x2 ,int y2, int col)
 {
   float m,b,y,x;int q;
   float xf1, yf1, xf2, yf2;

   xf1 = (float) x1;
   yf1 = (float) y1;
   xf2 = (float) x2;
   yf2 = (float) y2;
   x =   (float)x1;
   if(x1==x2)
   {
      if(y1<y2)
      {
	for(q=y1;q<y2;q++)
		putpixel((int)x,q, col);
      }
     else
     {
	for(q=y1;q>y2;q--)
		putpixel((int)x,q,col);

     }
   }
   else
   {
    m = (yf2-yf1)/(xf2-xf1);
    b = (yf1-m*xf1);
    if(x1<x2)
    {
	for(x=x1;x<x2;x++)
	{
	 y = m*x+b;
	 putpixel((int)x,(int)y,col);
	}
    }
   else
   {
	for(x=x1;x>x2;x--)
	{
	   y = m*x+b;
	   putpixel((int)x,(int)y,col);
	 }
   }
 }
}