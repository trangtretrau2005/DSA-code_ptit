#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n;
		cin>>n;
		ll a[n], b[n-1];
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll i=0;i<n-1;i++) cin>>b[i];
		for(ll i=0;i<n;i++){
			if(a[i]!=b[i]||i==n-1) {
				cout<<i+1<<endl;
				break;
			}		
		}
	}
}
