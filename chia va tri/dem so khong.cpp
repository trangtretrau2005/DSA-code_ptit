#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<lower_bound(a,a+n,1)-a<<endl;
	}
}
