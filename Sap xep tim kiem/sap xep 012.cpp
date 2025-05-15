#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		multiset<int> x;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			x.insert(tmp);
		}
		for(int i:x) cout<<i<<" ";
		cout<<endl;
	}
}
