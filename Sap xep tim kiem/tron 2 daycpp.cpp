#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
	int n,m;
	cin>>n>>m;
	int t;
	multiset<int> x;
	while(n+m--) {
		cin>>t;
		x.insert(t);
	}
	for(int i:x) cout<<i<<" ";
	cout<<endl;
}
}
