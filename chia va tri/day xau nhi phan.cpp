#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll kq(ll a[],ll n, ll k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k>a[n-2]) return kq(a,n-1,k-a[n-2]);
	else return kq(a,n-2,k);
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n,k;
		cin>>n>>k;
		ll a[93];
		a[1]=1;
		a[2]=1;
		for(int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2]; 	
		cout<<kq(a,n,k)<<endl;
	}
}
