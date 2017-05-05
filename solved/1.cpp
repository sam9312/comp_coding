/*

https://www.hackerrank.com/challenges/ctci-balanced-brackets

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	stack<char> mystack;
	stack<char> empty;
	int n;
	cin>>n;
	int fail;
	while(n--){
		char str[1003];
			scanf("%s",str);
			fail=0;
			//printf("hi\n");
			for(int i =0;i<strlen(str);i++)
			{

				if(str[i]=='[' || str[i]=='{' || str[i]=='(')
					mystack.push(str[i]);
				
				else if (!mystack.empty()&&str[i]==']' && mystack.top()=='['||!mystack.empty()&&str[i]=='}' && mystack.top()=='{'||!mystack.empty()&&str[i]==')' && mystack.top()=='(')
					mystack.pop();
				else
					{	fail=1;
						break;
					}

			}

			if(fail==0 && mystack.empty())
				printf("YES\n");
			else
				printf("NO\n");

			while(!mystack.empty()){
				mystack.pop();
			}

	}

return 0;
}