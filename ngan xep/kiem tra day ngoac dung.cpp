#include<bits/stdc++.h>
using namespace std;

bool check1(char x, char y){
	if(x=='('&&y==')') return true;
	if(x=='['&&y==']') return true;
	if(x=='{'&&y=='}') return true;
	else return false;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<char> x;
		bool check=false;
		for(int i=0;i<s.size();i++){
			if(s[i]=='['||s[i]=='{'||s[i]=='(') x.push(s[i]);
			else if(!x.empty()){
					if(check1(x.top(),s[i])) {
					x.pop();
				}
				else {
					check=true;
					break;
				}
			}
			else {check=true;
			break;
			}
		}	
	if(check) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
}
