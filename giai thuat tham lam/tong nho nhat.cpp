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
		sort(a,a+n);
		ll n1=0,n2=0;
		for(int i=0;i<n;i++){
			if(i%2==0) n1=n1*10+a[i];
			else n2=n2*10+a[i];
		}
		cout<<n1+n2<<endl;
	}
}
