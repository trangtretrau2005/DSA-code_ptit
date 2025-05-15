#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fi[92];

char fibo(ll n, ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k>fi[n-2]) return fibo(n-1,k-fi[n-2]);
	else return fibo(n-2,k);
}

int main(){
	int test;
	cin>>test;
	while(test--){
		ll n, k;
		cin>>n>>k;
		fi[1]=1;
		fi[2]=1;
		for(int i=3;i<92;i++) fi[i]=fi[i-1]+fi[i-2];
		cout<<fibo(n,k)<<endl;
	}
}
