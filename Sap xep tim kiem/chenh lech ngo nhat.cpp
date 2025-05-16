#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int &i:a) cin>>i;
		int max=1e9;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			int tmp=a[i+1]-a[i];
			if(tmp<max) max=tmp;
		}
		cout<<max<<endl;
	}
}
