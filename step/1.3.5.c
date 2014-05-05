#include<stdio.h>
#include<string.h>

int main()
{
	int n,m,len,i;
	char b[9];
	char e[9];
	char d[9];
	char bid[16];
	char eid[16];
	char t[16];
	
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		strcpy(b,"99:99:99");
		strcpy(e,"00:00:00");
		while(m--)
		{
			i=0;
			scanf("%s",t);
			scanf("%s",d);
			if(strcmp(b,d)>0)
			{
				strcpy(b,d);
				strcpy(bid,t);
			}
			scanf("%s",d);
			if(strcmp(e,d)<0)
			{
				strcpy(e,d);
				strcpy(eid,t);
			}
		}
		printf("%s %s\n", bid,eid);
	}
	return 0;
}
