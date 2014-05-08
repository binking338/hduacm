#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int cmp(void* a, void* b)
{
	return *((char*)a)-*((char*)b);
}

void solve(int t, char* dic)
{
	int v,w,x,y,z,l;
	int p[12];
	l = strlen(dic);
	qsort((void*)dic,l,sizeof(char),cmp);
	for(v=0;v<l;v++)
	{
		p[v]=dic[v]-'A'+1;
	}
	
	for(v=l-1;v>=0;v--)
	for(w=l-1;w>=0;w--)
	for(x=l-1;x>=0;x--)
	for(y=l-1;y>=0;y--)
	for(z=l-1;z>=0;z--)
	{
		if(w==v)continue;
		if(x==w||x==v)continue;
		if(y==x||y==w||y==v)continue;
		if(z==y||z==x||z==w||z==v)continue;
		if(p[v]-p[w]*p[w]+p[x]*p[x]*p[x]-p[y]*p[y]*p[y]*p[y]+p[z]*p[z]*p[z]*p[z]*p[z] == t)
		{
			printf("%c%c%c%c%c\n",dic[v],dic[w],dic[x],dic[y],dic[z]);
			return;
		}
	}
	printf("no solution\n");
}
int main(void)
{
	int t;
	char dic[13];
	while(scanf("%d %s",&t,dic)!=EOF)
	{
		if(!t && !strcmp(dic,"END"))break;
		solve(t,dic);
	}
	return 0;
}
