#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;



int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll sum=0;
		for(int i=0;i<n;i++){
			sum = sum+(a[i]*i)%mod;
			sum=sum%mod;
		}
		cout<<sum<<endl;
	}
}
