#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<dos.h>

int  round(float);
void lines(int,int,int,int,int);
void ddaline(int,int,int,int,int);
void bresenham(int,int,int,int,int);
int main(void)
{
   int i,n;
   char c;
   int x1[] =  {100,100,400,400,100,100,200,200,100,400,100,100,100};
   int y1[] =  {100,200,100,200,100,400,100,400,100,100,100,200,100};
   int x2[] =  {400,400,100,100,200,200,100,400,400,100,100,100,100};
   int y2[] =  {200,100,200,100,400,100,400,100,100,100,200,100,100};

   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   do
   {
	i=0;
	printf("\n");
	printf("%d) Direct line    \n",i+1);
	printf("%d) DDA alogrithem \n",i+2);
	printf("%d) Bresmham algo  \n",i+3);
	printf("%d) exit \n",i+4);
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
	}while((n<1) || (n>4));

	switch(n)
	{
		case 1:
			for(i=0;i<13;i++)
			{
				printf(" %d ",i+1);
				lines(x1[i],y1[i],x2[i],y2[i],i+1);
				getch();
			}
			printf("\n");
			break;
		case 2:
			for(i=0;i<13;i++)
			{
				printf(" %d ",i+1);
				ddaline(x1[i],y1[i],x2[i],y2[i],i+1);
				getch();
			}
			printf("\n");
			break;
		case 3:
			for(i=0;i<13;i++)
			{
				printf(" %d ",i+1);
				bresenham(x1[i], y1[i], x2[i], y2[i], i+1);
				getch();
			}
			printf("\n");
			break;
		default:break;
	}

	printf("Do you want to continue [Press y/Y to continue]: ");
	scanf("%s",&c);
   }while((c =='y') || (c =='Y'));

   //getch();
   closegraph();
   return 0;
}
void bresenham(int x1,int y1,int x2,int y2,int col)
{
	int x,y,dx,dy,adx,ady,xinc,yinc;
	int p,i;
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	adx = abs(dx);
	ady=abs(dy);
	if(adx==0)
		xinc  = 0;
	else
		xinc=dx/adx;
	if(ady==0)
		yinc=0;
	else
		yinc =dy/ady;
	putpixel(x,y,WHITE);
	if(adx >ady)
	{
		p = 2*ady-adx;
		while(x!=x2)
		{
			if(p<0)
				p = p + 2*ady;
			else
			{
				p = p+2*(ady-adx);
				y = y+yinc;
			}
			x = x+xinc;
			delay(10);
			putpixel(x,y,col);
		}
	}
	else
	{
		p =2*adx-ady;
		while(y!=y2)
		{
			if(p<0)
				p =p+ 2*adx;
			else
			{
				p=p+2*(adx-ady);
				x = x+xinc;
			}
			y=y+yinc;
			delay(10);
			putpixel(x,y,col);
		}
	}
}
void ddaline(int x1,int y1,int x2,int y2,int col)
{
	float x,y, dx,dy,adx,ady,steps,xinc,yinc;
	int i;
	dx = x2-x1;
	dy = y2 - y1;
	adx = abs(dx);
	ady = abs(dy);
	if(adx > ady)
		steps = adx;
	else
		steps = ady;
	if(adx == 0)
		xinc = 0;
	else
		xinc = dx/steps;

	if(ady ==0)
		yinc =  0;
	else
		yinc=dy/steps;
	x=x1;
	y=y1;
	putpixel(x,y,WHITE);

	for(i=0;i<steps;i++)
	{
		x = x+xinc;
		y = y+ yinc;
		delay(10);
		putpixel(round(x),round(y),col);
	}

}
void lines(int x1,int y1,int x2,int y2,int c)
{
	float dx,dy,x,y,m,b;
	float xf,yf,adx,ady,xinc,yinc,minv;

	dx = (x2-x1);
	dy = (y2-y1);

	xf = (float) x1;
	yf = (float) y1;

	adx = (float)(abs(dx));
	ady = (float)(abs(dy));

	x = round(x1);

	y=round(y1);
	if(adx == 0)
		xinc = 0;
	else
		xinc = dx/adx;
	if(ady == 0)
		yinc = 0;
	else
		yinc = dy/ady;

	putpixel(x1,y1,WHITE);

	if( adx > ady)
	{
		m = dy/dx;
		b = yf - m * xf;
		while( x != x2)
		{
			x = x + xinc;
			y = m * x+b;
			delay(10);
			putpixel(x,round(y),c);
		}
	}
	else
	{
		minv = dx / dy;
		if(minv != 0)
			b = yf - (1.0/minv)*xf;

		while(y != y2)
		{
			y = y + yinc;
			if(dx == 0)
				xf = x1;
			else
				xf = minv*(y-b);
			delay(10);
			putpixel(round(xf),y,c);
		}
	}
   }

 int round(float x)
 {
   return((int)(x+0.5));
 }
