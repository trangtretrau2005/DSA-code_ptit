#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
const ll mod=1e9+7;

struct matrix{
	ll x;
	ll y;
	ll z;
	ll t;
};

matrix operator *(matrix a, matrix b){
	matrix res;
	res.x=(a.x*b.x+b.z*a.y)%mod;
	res.y=(a.x*b.y+a.y*b.t)%mod;
	res.z=(a.z*b.x+a.t*b.z)%mod;
	res.t=(a.z*b.y+a.t*b.t)%mod;
	return res;
}

matrix lt(matrix X, ll n){
	if(n==1) return X;
	matrix ok= lt(X,n/2);
	if(n%2==0) return ok*ok;
	else return ok*ok*X;
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		cin>>n;
		matrix X;
		X.x=1;
		X.y=1;
		X.z=1;
		X.t=0;
		matrix T= lt(X,n);
		cout<<T.y%mod<<endl;
	}
}
