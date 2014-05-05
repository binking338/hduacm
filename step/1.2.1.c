#include <stdio.h>
#define PI 3.1415927

int main()
{
	float d,r,t,s;
	int i=0;
	while(scanf("%f%f%f",&d,&r,&t)!=EOF){
		if(r==0)return 0;
		i++;
		s=d*r*PI/12/5280;
		printf("Trip #%d: %.2f %.2f\n", i, s, s*3600/t);
	}
	return 0;
}
