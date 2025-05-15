#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lt(ll n){
	if(n==1) return 2;
	if(n==0) return 0;
	ll tmp = lt(n/2);
	if(n%2==0) return tmp*tmp;
	else return tmp*tmp*2;
}

ll kq(ll n, ll k){
	if(n==1) return 1;
	if(lt(n-1)==k) return n;
	else if (k<lt(n-1)) return kq(n-1,k);
	else return kq(n-1,k-lt(n-1));
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n,k;
		cin>>n>>k;
		cout<<char(kq(n,k)+'A'-1)<<endl;
	}
}
