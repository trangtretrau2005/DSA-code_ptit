#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll n, k;
struct matrix{
	ll mx[11][11];
	
};

matrix operator * (matrix a, matrix b){
	matrix res;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res.mx[i][j]=0;
			for(int t=0;t<n;t++){
				res.mx[i][j]+= (a.mx[i][t]*b.mx[t][j])%mod;
			}
			res.mx[i][j]%=mod;
		}
	}
	return res;
}

matrix lt(matrix a, ll k){
	if(k<=1) return a;
	matrix res;
	res = lt(a,k/2);
	if(k%2==0) return (res*res);
	else return res*res*a;  
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		cin>>n>>k;
		matrix x;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				cin>>x.mx[i][j];
			}
		}
		x = lt(x,k);
		ll res=0;
		for(int i=0;i<n;i++) res+=x.mx[i][n-1];
		res%=mod;
		cout<<res<<endl;
	}
}
