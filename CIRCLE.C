#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

int round(float);
void incpolar(int,int,int);
void polar(int,int,int);
void acircle(int,int,int);
void bcircle(int,int,int);
void mid(int,int,int);
void put_circle_pixel(int,int,int,int,int);

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int i,n;
   char c;
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
  do
   {
	i=0;
	printf("\n");
	printf("%d) Direct circle algo  \n",i+1);
	printf("%d) Bresmham alogrithem \n",i+2);
	printf("%d) Mid-point algorithm \n",i+3);
	printf("%d) Polar algorithm \n",i+4);
	printf("%d) Incremental Polar algorithm \n",i+5);
	printf("%d) exit \n",i+6);
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
	}while((n<1) || (n>6));

	switch(n)
	{
		case 1: acircle(200,200,123);
			break;
		case 2: bcircle(200,200,111);
			break;
		case 3: mid(200,200,100);
			break;
		case 4: polar(200,200,90);
			break;
		case 5: incpolar(200,200,80);
			break;
		default:break;
	}

	printf("Do you want to continue [Press y/Y to continue]: ");
	scanf("%s",&c);
   }while((c =='y') || (c =='Y'));




/*clean up*/
  // getch();
   closegraph();
   return 0;
}
void incpolar(int h,int k ,int r)
{
    float x,y;
    float t,dt,c,s;
    x=r;
    y=0;
    dt=1.0/(float)r;
    c = cos(dt);
    s = sin(dt);
    put_circle_pixel(h,k,x,y,WHITE);
    while(x>=y)
    {
      float temp;
      temp=x;
      x= x*c-y*s;
      y= temp*s+y*c;
      put_circle_pixel(h,k,round(x),round(y),WHITE);
    }
}
void polar(int h,int k,int r)
{
    float t,dt,x,y;
    t=0;
    dt=1.0/(float)r;
    // x = r*cos(t);
      // y = r*sin(dt);
    while(t<=M_PI_4)
    {
       x = r*cos(t);
       y = r*sin(t);
       put_circle_pixel(h,k,round(x),round(y),WHITE);
       t = t+dt;
    }

}
void mid(int h,int k,int r)
{
    int x,y,p;
    x=0;
    y=r;
    p=1-r;
    put_circle_pixel(h,k,x,y,WHITE);
    while(x<y)
    {
	if(p<0)
	   p=p+2*x+3;
	else
	   {
	      p = p+2*x-2*y+5;
	      y = y-1;
	   }
       x=x+1;
       put_circle_pixel(h,k,x,y,WHITE);
    }
}
void bcircle(int h,int k,int r)
{
    int x,y,p;
    x=0;
    y=r;
    p=3-2*r;
    put_circle_pixel(h,k,x,y,WHITE);
    while(x<=y)
    {
	if(p<0)
	   p=p+4*x+6;
	else{
	p=p+4*x-4*y+10;
	y=y-1;
	}
	x=x+1;
	put_circle_pixel(h,k,x,y,WHITE);

     }
}
void acircle(int h,int k,int r)
{
    int x = 0;
    int y = r;
    put_circle_pixel(h,k,x,y,WHITE);
    while(x<=y)
    {
	x = x+1;
	y = sqrt(r*r-x*x);
	put_circle_pixel(h,k,x,round(y),WHITE);
    }
}
void put_circle_pixel(int h,int k,int x,int y,int col)
{
    putpixel(h-x,k+y,col-1);
    putpixel(h+x,k+y,col-2);
    putpixel(h-x,k-y,col-3);
    putpixel(h+x,k-y,col-4);
    putpixel(h+y,k+x,col-5);
    putpixel(h-y,k+x,col-6);
    putpixel(h-y,k-x,col-7);
    putpixel(h+y,k-x,col);
}
int round(float x)
{
  return((int)(x+0.5));
}