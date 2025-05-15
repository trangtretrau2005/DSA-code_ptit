#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int x=0;
		int y=0;
		stack<char> t;
		for(char i:s){
			if(i=='(') t.push(i);
			else{
				if(t.empty()) x++;
				else t.pop();
			}
		}
		y=t.size();
		if(x%2==0) cout<<(x+y)/2<<endl;
		else cout<<(x+y)/2+1<<endl;
	}
}
