#include <stdio.h>

int main()
{
	int n;
	char id[19];
	char* r=NULL;
	
	scanf("%d",&n);
	while(n>0){
		scanf("%s",id);
		if(!strncmp(id,"33",2))
		{
			r="Zhejiang";
		}
		else if(!strncmp(id,"11",2))
		{
			r="Beijing";
		}
		else if(!strncmp(id,"71",2))
		{
			r="Taiwan";
		}
		else if(!strncmp(id,"81",2))
		{
			r="Hong Kong";
		}
		else if(!strncmp(id,"82",2))
		{
			r="Macao";
		}
		else if(!strncmp(id,"54",2))
		{
			r="Tibet";
		}
		else if(!strncmp(id,"21",2))
		{
			r="Liaoning";
		}
		else if(!strncmp(id,"31",2))
		{
			r="Shanghai";
		}
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",r,id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
		n--;
	}
	return 0;
}
