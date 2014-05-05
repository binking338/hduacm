#include <stdio.h>
#include <string.h>
#include <math.h>

char* sum(char* a, char *b, char *c)
{
	int i,la,lb,lt,carry;
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
		carry = c[1000-i-1]+b[lb-i-1]-'0'-'0';
		c[1000-i-1] =(carry)%10+'0';
		c[1000-i-2]+=(carry)/10;
	}
	for(i=lb;i<la;i++)
	{
		if(c[1000-i-1]>'9')
		{
			c[1000-i-2]+=1;
			c[1000-i-1]=(c[1000-i-1]-'9'-1)+'0';
		}
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

char* multi_one(char* a, int b, char *c)
{
	int i,len,t,carry=0;
	b%=10;
	len=strlen(a);
	strcpy(c+(1000-len), a);
	c[1000-len-1]='0';
	c[1001]='\0';
	for(i=0;i<len;i++)
	{
		t = (c[1000-i-1]-'0')*b;
		c[1000-i-1]=(t%10)+'0'+carry;
		carry=t/10;
	}
	if(carry>0)
	{
		c[1000-len-1]+=carry;
		return c+(1000-len-1);
	}
	else
	{
		return c+(1000-len);
	}
}

char* multi(char* a, char* b, char *c)
{
	int i,j,len,l;
	char t[1002];
	char *r;
	len = strlen(b);
	c[0]='0';
	c[1]='\0';

	for(i=len-1;i>=0;i--)
	{
		r = multi_one(a,b[i]-'0',t);
		strcpy(t,r);
		l=strlen(t);
		
		for(j=0;j<len-1-i;j++)
		{
			t[l+j]='0';
		}
		t[l+j]='\0';
		r = sum(c,t,c);
		strcpy(c,r);
	}
	return c;
}

char* exp_b(char* a, int b, char *c)
{
	int i;
	char t[1002];
	char *r;
	strcpy(c,a);
	for(i=1; i<b; i++)
	{
		r = multi(c,a,t);
		strcpy(c,r);
	}
	return c;
}

int main(void)
{
	char a[1002],c[1002],r[7];
	char *ap;
	int n,p,i,len;
	while(scanf("%s %d",r,&n)!=EOF)
	{
		len=strlen(r);
		p=-1;
		for(i=0;i<len;i++)
		{
			if(r[i]=='.'){
				p=len-i-1;
				continue;
			}
			if(p<0)a[i]=r[i];
			else a[i-1]=r[i];
		}
		a[p<0?i:i-1]='\0';
		ap = a;
		while(ap[0]=='0')
		{
			ap=ap+1;
		}
		ap = exp_b(ap,n,c);
		len = strlen(ap);
		p=p*n;
		while(p>0 && len>1 && ap[len-1]=='0')
		{
			ap[len-1]='\0';
			len--;
			p--;
		}
		if(p<=0)
		{
			printf("%s\n", ap);
		}
		else if(p>=len)
		{
			printf(".");
			for(i=p-len; i>0; i--)
			{
				printf("0");
			}
			printf("%s\n",ap);
		}
		else
		{
			for(i=0; i<len-p; i++)
			{
				printf("%c", ap[i]);
			}
			printf(".");
			for(i=len-p; i<len; i++)
			{
				printf("%c", ap[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
