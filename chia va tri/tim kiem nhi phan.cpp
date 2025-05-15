#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		if(a[lower_bound(a,a+n,k)-a]!=k) cout<<"NO"<<endl;
		else cout<<lower_bound(a,a+n,k)-a+1<<endl;
	}
}
