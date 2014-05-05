#include <stdio.h>

int main()
{
	int n,r,e,c,d;
	scanf("%d",&n);
	while(n>0){
		scanf("%d%d%d",&r,&e,&c);
		d = r-(e-c);
		if(d<0)printf("advertise\n");
		else if(d==0)printf("does not matter\n");
		else printf("do not advertise\n");
		n--;
	}
	return 0;
}
