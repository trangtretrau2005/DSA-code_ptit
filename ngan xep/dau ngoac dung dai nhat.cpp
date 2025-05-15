#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<int>x;
		x.push(-1);
		int max1=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') x.push(i);
			else{
				x.pop();
				if(!x.empty()) max1=max(max1,i-x.top());
				if(x.empty()) {
				x.push(i);
		}
			}
		}
		cout<<max1<<endl;
	}
}
