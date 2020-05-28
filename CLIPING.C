
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <string.h>
#include <ctype.h>

#define ABOVE 3;   //1000
#define BELLOW 2;  //0100
#define RIGHT 1;   //0010
#define LEFT 0;    //0001
#define INSIDE 0;

float xi, yi;
float xwmin, ywmin, xwmax, ywmax;
int maxX, maxY, midX, midY;


void intersect(float x1,float y1, float x2, float y2, int code[1]);
int computeCode(float x, float y);

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int ch,x,y,n,i,tx,ty,b,a;
  // int obj[3][20]={0},objdash[3][20]={0};
   //float trans[3][3];
   float sX,sY,de,re;
   int h,k;

   int vx[] = {25,160,35, 100,135};
   int vy[] = {35,50,125, 0,135};
   initgraph(&gdriver, &gmode, "C://turboc3//bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }

   maxX = getmaxx();
   maxY = getmaxy();
   midX = maxX/2;
   midY = maxY/2;

   line(0,midY,maxX,midY);
   line(midX,0,midX,maxY);

   outtextxy(midX-80,maxY-20,"-Y-AXIS");
   outtextxy(midX-80,0,"Y-AXIS");
   outtextxy(maxX-80,midY,"X-AXIS");
   outtextxy(midX-60,maxY+20,"-X-AXIS");
  // n=5;
  // for(i=0;i<n;i++)
  // {
 //      obj[0][i] = vx[i];
 //      obj[1][i] = vy[i];
 //      obj[2][i] = 1;
 //  }
       line(0,0,200,100);
 //   draw_poly(n,obj,GREEN);
    printf("1) OUTSIDE demo...\n");
    printf("End Code 1: 1010\n");
    printf("End Code 2: 1010\n");
    printf("Line is trivially rejeted\n");
    printf("press any key to CLIP\n");
/*    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
	   printf("Enter translation x and  y cordinates \n");
	   scanf("%d %d",&tx,&ty);
	   translation(tx,ty,trans);
	   break;
       case 2:
	   printf("Enter sx and sy values: ");
	   scanf("%f %f",&sX,&sY);
	   scaling(sX,sY,trans);
	   break;
       case 3:
	    printf("Enter the value of sx,sy: ");
	    scanf("%f %f",&sX,&sY);
	    printf("enter h,k: ");
	    scanf("%d %d",&h,&k);
	    scaling_about(sX,sY,h,k,trans);
	break;
       case 4:
	   printf("this is radian \n");
	   de=90;
	   re = de*M_PI/180.0;
	   rotation(re,trans);
	   break;
       case 5:
	   printf("Enter the vlue of h,k :");
	   scanf("%d %d",&h,&k);
	   de=45;
	   re = de*M_PI/180.0;
	   rotation_about(re,trans,h,k);
	   break;
       case 6:
	   reflectionX(trans);
	   break;
       case 7:
	   reflectionY(trans);
	   break;
       case 8:
	   de=45;b=9;
	   re = de*M_PI/180.0;
	   mirror_reflection(re,trans,b);
	   break;
       case 9:
	    printf("Enter the valu of Sa : ");
	    scanf("%d",&a);
	    shearingX(trans,a);
	    break;
       case 10:
	    printf("Enter the valu of Sb : ");
	    scanf("%d",&b);
	    shearingX(trans,b);
	    break;
       case 11:
	    printf("Enter the valu of Sa,Sb : ");
	    scanf("%d %d",&a,&b);
	    shearing_about(trans,a,b);
       break;
       default:printf("Wrong choice :");
	       getch();
	       exit(0);

    }
      transform(n,obj,trans,objdash);
      draw_poly(n,objdash,WHITE);
  */

   getch();
   closegraph();
   return 0;
}
 /*
 int computeCode(float x, float y){
 int code = INSIDE;
 if(x <xwmain)
      code|=LEFT;
 else if()
 } */