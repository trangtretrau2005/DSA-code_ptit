#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &i:a) cin>>i;
		bool check=false;
		sort(a,a+n);
		for(int i=0;i<n-2;i++){
			int l=i+1;int r=n-1;
			while(l<r){
				long long sum =a[i]+a[l]+a[r];
				if(sum==k){
					check=true;
					break;
				}
				else if(sum<k){
					l++;
				}
				else r--;
			}
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
