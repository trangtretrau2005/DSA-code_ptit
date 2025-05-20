#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m],c[n+m-1]={};
		for(long long &i:a) cin>>i;
		for(long long &i:b) cin>>i;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
			c[i+j]+=(a[i]*b[j]);
		}
		for(int i:c) cout<<i<<" ";
		cout<<endl;
	}
}
