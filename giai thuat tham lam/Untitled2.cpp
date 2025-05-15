#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}		
	sort(b,b+n);
	int cnt=0;
	int t=n;
	for(int i=0;i<n;i++){
		if(lower_bound(b,b+n,a[i])-b<i&&b[lower_bound(b,b+n,a[i])-b]==a[i]){
			cout<<lower_bound(b,b+n,a[i])-b<<" ";
		cnt++;
		}
		
	}
	cout<<t-cnt;
}
