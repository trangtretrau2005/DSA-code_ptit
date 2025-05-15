#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]==m) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
