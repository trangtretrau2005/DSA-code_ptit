#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll lt(ll n){
	if(n==0) return 1;
	ll tmp = lt(n/2);
	if(n%2==0) return tmp*tmp;
	else return tmp*tmp*2; 
	
}

ll res(ll n, ll k){
	if(lt(n-1)==k) return n;
	if(lt(n-1)>k) return res(n-1,k);
	else return res(n-1,k-lt(n-1));
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n, k;
		cin>>n>>k;
		cout<<res(n,k)<<endl;
	}
}
