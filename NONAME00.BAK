
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

int round(float);
void direct(int,int,int,int);
void mid_point(int,int,int,int);
void polar_domain(int,int,int,int);
void put_ellipse_pixel(int,int,int,int,int);
void increment_polar_domain(int,int,int,int);

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int i,n;  char c;
   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C://turboc3//bgi");

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
	printf("%d) Direct  algo  \n",i+1);
	printf("%d) Mid-point algorithm \n",i+2);
	printf("%d) Polar algorithm \n",i+3);
	printf("%d) Incremental Polar algorithm \n",i+4);
	printf("%d) exit \n",i+5);
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
	}while((n<1) || (n>5));

	switch(n)
	{
		case 1: direct(300,200,50,100);
			break;
		case 2: mid_point(300,200,50,75);
			break;
		case 3: polar_domain(300,200,100,75);
			break;
		case 4: increment_polar_domain(300,200,100,50);
			break;
		default:break;
	}

	printf("Do you want to continue [Press y/Y to continue]: ");
	scanf("%s",&c);
   }while((c =='y') || (c =='Y'));

   closegraph();
   return 0;
}
void direct(int h,int k ,int a,int b)
{
   double x,y;
   x=0.0;
   y=b;
   put_ellipse_pixel(h,k,x,y,LIGHTGREEN);
   while((b*b*x)<= (a*a*y))
   {
       x = x+1.0;
       y = b * sqrt(1.0-((x/a)*(x/a)));
       delay(10);
       put_ellipse_pixel(h,k,x,round(y),RED);
   }
   y=round(y);
   while(y>=0)
   {
       y = y-1;
       x =a*sqrt(1.0-((y/b)*(y/b)));
       delay(10);
       put_ellipse_pixel(h,k,round(x),y,BLUE);
   }
}
void mid_point(int h,int k,int a,  int b)
{
   float x,y,p,da,db;

   float fb = (float)b;
   float fa = (float)a;
   da = fa * fa;
   db =fb * fb;
   x=0.0;
   y = (double)b;
   p = db - da * fb + da/4.0;
   put_ellipse_pixel(h,k,x,y,RED);
   while( (db*x) <= (da*y))
   {
       if(p<0.0)
	   p = (p + ((2.0)*db*x) + (3 * db));
       else
       {
	   p = (p + ((2*db*x) - (2*da*y)) + 3*db + 2*da);
	   y = y-1;
       }
       x = x+1;
       put_ellipse_pixel(h,k,x,y,RED);
   }
   p = ((db* (x+1.0/2.0)*(x+1.0/2.0)) + (da*(y-1.0)*(y-1.0)) - da*db);
   while(y>=0.0)
   {
       if(p<0.0)
       {
	   p = p + ((2.0*db*x) - (2.0*da*y) + (3.0*da) + (2.0*db));
	   x = x+1.0;
       }
       else
       {
	   p = p - 2.0*da*y + 3.0*da;
       }
       y = y-1;
       put_ellipse_pixel(h,k,x,y,BLUE);
   }
}

void polar_domain(int h,int k,int a,int b)
{
   float theta,d_theta,x,y;
   theta = 0.0;
   if(a<b)
       d_theta = 1.0/(float)b;
   else
       d_theta = 1.0/(float)a;
   while(theta<=M_PI_2)
   {
       x=a*cos(theta);
       y=b*sin(theta);
       put_ellipse_pixel(h,k,round(x),round(y),RED);
       theta =theta+d_theta;
   }
}

void increment_polar_domain(int h,int k,int a,int b)
{
  double dt,c,s,t1,t2,fa,fb;
  double  x = 0.0;
  double  y = (double)b;

  fa=(double)a;
  fb=(double)b;


   if( fa > fb)
       dt=1.0/fa;
   else
       dt=1.0/fb;
   c = cos(dt);
   s = sin(dt);
   t1 = (fa/fb)*s;
   t2 = (fb/fa)*s;
   put_ellipse_pixel(h,k,x,y,WHITE);
   while(y>0)
   {
       double temp;
       temp = x;
       x = ((c*x) - (t1*y));
       y = ((t2*temp) + (c*y));

       delay(20);
       put_ellipse_pixel(h,k,round(x),round(y),RED);
   }
}

void put_ellipse_pixel(h,k,x,y,col)
{
   putpixel(h+x,k+y,col);
   putpixel(h-x,k+y,col);
   putpixel(h-x,k-y,col);
   putpixel(h+x,k-y,col);

}
int round(float x)
{
 return((int)(0.5+x));
}