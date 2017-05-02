/*

https://www.hackerrank.com/challenges/ctci-balanced-brackets

*/


#include <bits/stdc++.h>

int main(){

int n;
char s[1000];
char stack[1000];
int top=0;
int fail;
scanf("%d",&n);

while(n--){
	top = -1;
	fail=0;
	scanf("%s",s);

	for(int i = 0 ; i < strlen(s) ; i++)
	{	//printf("Iteration number %d\n%c  -----  %c\n",i+1,s[i],stack[top]);
		if(s[i] == '(' || s[i] == '{' || s[i] == '[' )
			{	fail=0;
				stack[++top]=s[i];
				//printf("Read and pushed\n");

				//printf("Stack:%c\nTop:%d\ns[i]:%c\n",stack[top],top,s[i]);
			}
		else if (s[i] == ')' && stack[top]=='(' || s[i] == '}' && stack[top]=='{' || s[i] == ']' && stack[top]=='[')
			{	fail=0;
				//printf("Matched and popped\n");
				top--;
			}
		else
		{
			printf("NO\n");
			fail=1;
			break;
		}

	}
	if(fail==0)
	printf("YES\n");


}



return 0;
}