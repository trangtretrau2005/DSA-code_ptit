#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll s1=0,s2=0;
		if(n-k>k){
			for(int i=0;i<n;i++){
			if(i<k) s1+=a[i]%mod;
			else s2+=a[i]%mod;
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(i<n-k) s1+=a[i]%mod;
			else s2+=a[i]%mod;
		}
	}
		cout<<s2-s1<<endl;
			
		
	}
}
