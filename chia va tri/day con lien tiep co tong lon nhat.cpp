#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		ll max1=-1e9;
		ll current=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			current = fmax(current+a[i],a[i]);
			max1= fmax(current,max1);
		}
		cout<<max1<<endl;
	}
}
