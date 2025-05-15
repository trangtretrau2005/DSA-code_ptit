#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll search(ll a[],ll n, ll k){
	ll* res=lower_bound(a,a+n,k);
	if(k<a[0]) return -1;
	else if(k==a[res-a]) return res-a+1;
	else return res-a;
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		cout<<search(a,n,k)<<endl;
	}
}

