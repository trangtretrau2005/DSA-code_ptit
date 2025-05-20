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
		sort(a,a+n);
		int b[n]={};
		int cnt=n;
		int r=n-1;
		int l=n/2-1;
		while(l>=0){
			if(a[r]>=a[l]*2){
				cnt--;
				l--;
				r--;
			}
			else l--;
		}
		cout<<cnt<<endl;
	}
}
