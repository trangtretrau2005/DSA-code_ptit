#include<bits/stdc++.h>
using namespace std;

int cacu(char c,int x,int y){
	if(c=='+') return x+y;
	if(c=='-') return x-y;
	if(c=='*') return x*y;
	if(c=='/') return x/y;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int kq;
		stack<int> x;
		for(int i=s.size()-1;i>=0;i--){
			if(isdigit(s[i])){
				int t=s[i]-'0';
				x.push(t);
			}
			else {
				int t1 =x.top();
				x.pop();
				int t2=x.top();
				x.pop();
				int tmp= cacu(s[i],t1,t2);
				x.push(tmp);
			
			}
		}
		cout<<x.top()<<endl;
	}
}
