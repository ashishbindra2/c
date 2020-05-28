#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <DOS.h>

void flood_fill(int,int,int,int,int);
void boundary_fill(int,int,int,int,int);
int main(void)
{
   int n,b;
   char c;
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
   do
   {
       printf("1) Flood fill algo \n");
       printf("2) Blood fill algo \n");
       printf("3) Exit \n");
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
	}while((n<1) || (n>3));

       switch(n)
       {
	   case 1:
	       printf("\n");
	       printf("1) For 4-bit Boundary Fill \n");
	       printf("2) For 8-bit Boundary Fill \n");
	       scanf("%d",&b);
	       rectangle(50,50,100,100);
	       flood_fill(55,55,BLACK,RED,b);
	       break;
	   case 2:
	       printf("\n");
	       printf("1) For 4-bit Boundary Fill \n");
	       printf("2) For 8-bit Boundary Fill \n");
	       scanf("%d",&b);
	       rectangle(100,100,50,50);
	       boundary_fill(75,55,WHITE,MAGENTA,b);
	       break;
	   default:
	   printf("Enter wrong number \n");
       }
	printf("Do you want to continue [Press y/Y to continue]: ");
	scanf("%s",&c);
   }while((c =='y') || (c =='Y'));
//   getch();
   closegraph();
   return 0;
}
void boundary_fill(int x,int y,int bndColor,int fillColor,int b)
{

   int current = getpixel(x,y);

   if((current != bndColor) && (current != fillColor))
   {   //delay(20);
       putpixel(x,y,fillColor);
       if(b==1||b==2)
       {   // printf("111111111");
	   boundary_fill(x-1,y,bndColor,fillColor,b);
	   boundary_fill(x+1,y,bndColor,fillColor,b);
	   boundary_fill(x,y-1,bndColor,fillColor,b);
	   boundary_fill(x,y+1,bndColor,fillColor,b);
       }
       if(b==2)
       { //  printf("2222");
	   boundary_fill(x-1,y-1,bndColor,fillColor,b);
	   boundary_fill(x+1,y-1,bndColor,fillColor,b);
	   boundary_fill(x-1,y+1,bndColor,fillColor,b);
	   boundary_fill(x+1,y+1,bndColor,fillColor,b);
       }
   }
}
void flood_fill(int x,int y,int oldColor,int newColor,int b)
{

   if(getpixel(x,y)==oldColor)
   {
	putpixel(x,y,newColor);
 //	delay(10);
      if(b==1||b==2)
      {
       flood_fill(x-1,y,oldColor,newColor,b);
       flood_fill(x+1,y,oldColor,newColor,b);
       flood_fill(x,y-1,oldColor,newColor,b);
       flood_fill(x,y+1,oldColor,newColor,b);
      }
      if(b==2)
      {
       flood_fill(x-1,y-1,oldColor,newColor,b);
       flood_fill(x+1,y-1,oldColor,newColor,b);
       flood_fill(x-1,y+1,oldColor,newColor,b);
       flood_fill(x+1,y+1,oldColor,newColor,b);
      }
   }
}

