#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	stack<char> t;
	for(char &i:s){
		if(i!=' '&&i!=')') t.push(i);
		else if(i==')'){
			if(t.empty()) return true;
			int cnt=0;
			while(!t.empty()&&t.top()!='('){
				cnt++;
				t.pop();
			}
			if(t.empty()||cnt<=1) return true;
			else t.pop();
		}
	}
	return false;
}
 

int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		if(!check(s)) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
