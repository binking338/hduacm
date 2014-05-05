#include <stdio.h>

int main()
{
	int T,N,Y;
	
	scanf("%d",&T);
	while(T>0){
		scanf("%d%d",&Y,&N);
		if(!((Y%4==0 && Y%100!=0) || Y%400==0)){
			Y=(Y/4+1)*4;
			if(!((Y%4==0 && Y%100!=0) || Y%400==0)) Y+=4;
		}
		N--;
		
		Y+=N/97*400;
		N=N%97;
		
		while(N)
		{
			Y+=4;
			if(((Y%4==0 && Y%100!=0) || Y%400==0))N--;
		}
		printf("%d\n",Y);
		T--;
	}
	return 0;
}
