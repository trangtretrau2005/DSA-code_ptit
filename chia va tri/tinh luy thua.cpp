#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

ll lt(ll a, ll b){
	if(b==1) return a%mod;
	if(b==0) return 1;
	ll res=lt(a,b/2);
	if(b%2==0) return (res*res)%mod;
	else return (res*res)%mod*a%mod;
}


int main(){
	while(true){
		ll a,b;
		cin>>a>>b;
		if(a==0&&b==0) return 0;
		cout<<lt(a,b)<<endl;
	}
}
