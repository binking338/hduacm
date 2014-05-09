#include <stdio.h>
#include <string.h>
#define BR "<br>"
#define HR "<hr>"

int main()
{
	char w[82];
	int nl=1,lc=0,lw;
	
	while(scanf("%s",w)!=EOF)
	{
		if(!strcmp(BR,w))
		{
			printf("\n");
			nl=1;
			lc=0;
		}
		else if(!strcmp(HR,w))
		{
			if(!nl)printf("\n");
			printf("--------------------------------------------------------------------------------\n");
			nl=1;
			lc=0;
		}
		else
		{
			lw=strlen(w);
			if(lc+lw+1>80)
			{
				printf("\n");
				nl=1;
				lc=lw;
			}
			else
			{
				lc+=(lw+1);
			}
			if(nl)
			{
				nl=0;
			}
			else
			{
				printf(" ");
			}
			printf(w);
		}
	}
	printf("\n");
	return 0;
}
