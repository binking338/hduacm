#include<stdio.h>
char stack[1001];
int idx = 0;
void push(char c){
	stack[idx++] = c;
}
char pop(){
	if(idx == 0) return 0;
	return stack[--idx];
}
char top(){
	return stack[idx-1];
}

int main(){
	int T,i;
	char c;
	char str[1001];
	scanf("%d", &T); getchar();
	while(T--){
		gets(str);
		i=0;
		while(1){
			if(str[i] == ' '){
				while(c=pop()){
					printf("%c", c);
				}
				printf(" ");
			}else if(str[i] == '\0'){
				while(c=pop()){
					printf("%c", c);
				}
				printf("\n");
				break;
			}else{
				push(str[i]);
			}
			i++;
		}
	}
	return 0;	
}
