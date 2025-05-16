#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int m = max_element(a,a+n)-a;
		if(m==n-1) cout<<0<<endl;
		else cout<<m+1<<endl; 
	}
}
