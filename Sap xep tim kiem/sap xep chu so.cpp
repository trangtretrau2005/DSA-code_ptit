#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		int n;
		cin>>n;
		int a[n];
		set<int> x;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			while(a[i]){
				x.insert(a[i]%10);
				a[i]/=10;
			}
		}
		for(int i:x) cout<<i<<" ";
		cout<<endl;
	}
}
