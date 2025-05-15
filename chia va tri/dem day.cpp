#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=123456789;

ll lt(ll k){
	if(k==1) return 2;
	ll res = lt(k/2);
	if(k%2==0) return res%mod*res%mod;
	else return res%mod*res%mod*2%mod;
}

int main(){      
	int test;
	cin>>test;
	while(test--){
		ll n;
		cin>>n;
		cout<<lt(n-1)<<endl;
	}
}
