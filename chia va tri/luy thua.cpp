#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;

ll solve(int n,int k){
	if(k==0) return 1;
	if(k==1) return n;
	ll tmp= solve(n,k/2);
	if(k%2==0){	
		return (tmp*tmp)%mod;
	}
	else{
		return (tmp*tmp)%mod*n%mod;
	}
}


int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n, k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}
