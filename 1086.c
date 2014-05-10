#include <stdio.h>

int intersect(double x1, double y1, double x2, double y2, double X1, double Y1, double X2, double Y2)
{
    if(((x1-X1)*(y2-Y1)-(x2-X1)*(y1-Y1))*((x1-X2)*(y2-Y2)-(x2-X2)*(y1-Y2))>0)return 0;
    if(((X1-x1)*(Y2-y1)-(X2-x1)*(Y1-y1))*((X1-x2)*(Y2-y2)-(X2-x2)*(Y1-y2))>0)return 0;
    return 1;
}

int main(void){
	int n,i,j,l,s,c;
	double x1[100],y1[100],x2[100],y2[100];
	
	while(scanf("%d",&n),n)
	{
		for(i=0;i<n;i++)scanf("%lf%lf%lf%lf", x1+i,y1+i,x2+i,y2+i);
		c=0;
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				c+=intersect(x1[i],y1[i],x2[i],y2[i],x1[j],y1[j],x2[j],y2[j]);
			}
		}
		printf("%d\n",c);
	}
	
	return 0;
}
