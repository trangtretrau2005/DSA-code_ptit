#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	stack<int>t;
	while(test--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			t.push(x);
		}
		else if(s=="POP") {
			if(!t.empty()) t.pop();
		}
		else if(s=="PRINT"){
			if(t.empty()) cout<<"NONE"<<endl;
			else cout<<t.top()<<endl;
		}
	}
}
