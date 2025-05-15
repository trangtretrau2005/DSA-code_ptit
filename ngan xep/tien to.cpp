#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cacu(char a, ll x,ll y){
	if(a=='+') return x+y;
	if(a=='-') return x-y;
	if(a=='/') return x/y;
	if(a=='*') return x*y;
}

int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		ll n;
		cin>>n;
		cin.ignore();
		getline(cin,s);
		stack<ll> x;
		for(ll i=s.size()-1;i>=0;i--){
			if(s[i]!=' '){
				if(isdigit(s[i])){
					bool check=false;
					string tmp="";
					while(isdigit(s[i])){
					tmp=s[i]+tmp;
					if(s[i-1]=='-'){
					check=true;
					i--;
					break;
				}
				else i--;
				
				}
					if(check) x.push(-stoll(tmp));
					else x.push(stoll(tmp));
				}
				else{
					ll t1=x.top();
					x.pop();
					ll t2=x.top();
					x.pop();
					ll tmp=cacu(s[i],t1,t2);
					x.push(tmp);
				}
			}
		}
		cout<<x.top()<<endl;
	}
}
