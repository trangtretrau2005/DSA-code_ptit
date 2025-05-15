#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<string> x;
		for(int i=s.size()-1;i>=0;i--){
			if(isalpha(s[i])){
				string tmp;
				tmp=s[i];
				x.push(tmp);
			}
			else{
				string t1=x.top();x.pop();
				string t2=x.top();x.pop();
				string tmp="";
				tmp=t1+t2+s[i];
				x.push(tmp);
			}
		}
		cout<<x.top()<<endl;
	}
}
