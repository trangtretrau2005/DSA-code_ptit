#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1]={};
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		a[x]=a[x-1]+1;
	}
	cout<<n-*max_element(a+1,a+n+1);
	
}
