#include <stdio.h>

char  c[1002];

char* sum(char* a, char *b)
{
	int i,la,lb,lt;
	char* t;
	la = strlen(a);
	lb = strlen(b);
	if(la<lb)
	{
		t=a;
		a=b;
		b=t;
		lt=la;
		la=lb;
		lb=lt;
	}
	strcpy(c+(1000-la),a);
	c[1000-la-1]='0';
	c[1001]='\0';
	for(i=0;i<lb;i++)
	{
		c[1000-i-2]+=(c[1000-i-1]+b[lb-i-1]-'0'-'0')/10;
		c[1000-i-1] =(c[1000-i-1]+b[lb-i-1]-'0'-'0')%10+'0';
	}
	if(c[1000-la-1]>'0')
	{
		return c+(1000-la-1);
	}
	else
	{
		return c+(1000-la);
	}
}

int main(void)
{
	int t,i;
	char a[1001],b[1001];
	
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s %s",a,b);
		printf("Case %d:\n",i);
		printf("%s + %s = %s\n",a,b,sum(a,b));
		if(i<t)printf("\n");
	}
	return 0;
}
