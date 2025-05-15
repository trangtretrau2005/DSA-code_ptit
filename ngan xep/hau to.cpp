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
		for(ll i=0;i<s.size();i++){
			if(s[i]!=' '){
				if(i+1<s.size()&&isdigit(s[i])||(s[i]=='-'&&isdigit(s[i+1]))){
					bool check=false;
					if(s[i]=='-') {
					check=true;
					i++;
				}
					string tmp="";
					while(i+1<s.size()&&isdigit(s[i])){
						tmp+=s[i];
						i++;
					}
					if(check) x.push(-stoll(tmp));
					else x.push(stoll(tmp));
//					cout<<x.top()<<endl;
				}

				else{
					ll t1=x.top();
					x.pop();
					ll t2=x.top();
					x.pop();
					ll tmp=cacu(s[i],t2,t1);
					x.push(tmp);
				}
			}
		}
		cout<<x.top()<<endl;
	}
}
