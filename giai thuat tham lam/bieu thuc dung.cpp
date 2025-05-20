#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int l=0;
		int cnt=0;
		int ans=0;
		stack<char> v;
		for(int i=0;i<s.size();i++){
			if(v.empty()){
				cnt=0;
				v.push(s[i]);
			}
			else if(v.top()=='['&&s[i]==']'){
				cnt+=2;
				v.pop();
			}
			else if(v.top()==']'&&s[i]=='['){
				ans+=cnt+v.size();
				v.pop();
			}
			else v.push(s[i]);
		}
		cout<<ans<<endl;
	}
}
