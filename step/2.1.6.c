#include<stdio.h>
#include <stdlib.h>

double fp(double a,double b,double c,double x)
{
	return a*x*x*x/3.0 - a*b*x*x + (a*b*b+c)*x;
}

double fl(double a,double b,double x)
{
	return 0.5*a*x*x+b*x;
}

double area_parabola(double a,double b,double c,double x1,double x2)
{
	return fp(a,b,c,x2)-fp(a,b,c,x1);
}

double area_line(double a,double b,double x1,double x2)
{
	return fl(a,b,x2)-fl(a,b,x1);
}

void parabola(double x1,double y1,double x2,double y2,double* a, double* b, double* c)
{
	*c = y1;
	*b = x1;
	*a = (y2-*c)/((x2-*b)*(x2-*b));	
}

void line(double x2, double y2, double x3, double y3, double* a, double* b)
{
	*a = (y3-y2)/(x3-x2);
	*b = y2-(*a*x2);
}

double area(double x1,double y1,double x2,double y2,double x3, double y3)
{
	double pa,pb,pc,la,lb,r;
	parabola(x1,y1,x2,y2,&pa,&pb,&pc);
	line(x2,y2,x3,y3,&la,&lb);
	r = area_parabola(pa,pb,pc,x2,x3) - area_line(la,lb,x2,x3);
	return r<0?-r:r;
}

int main(void)
{
	int n;
	float x1,x2,x3,y1,y2,y3;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
		printf("%.2f\n",area(x1,y1,x2,y2,x3,y3));
	}
}
