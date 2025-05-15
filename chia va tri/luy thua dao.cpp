#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod =1e9+7;
ll lt(ll n, ll k){
	if(k==1) return n;
	if(k==0) return 1;
	ll res = lt(n,k/2);
	if(k%2==0) return res%mod*res%mod;
	else return res%mod*res%mod*n%mod;
}	

ll reverse(ll n){
	ll res=0;
	while(n>0){
		res=res*10+(n%10);
		n/=10;
	}
	return res;
}
	
int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n;
		cin>>n;
		cout<<lt(n,reverse(n))<<endl;
	}
}

