#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		multiset<int> x;
		for(int i=0;i<n;i++){
			int tmp=0;
			cin>>tmp;
			x.insert(tmp);
		}
		for(int i:x) cout<<i<<" ";
		cout<<endl;
	}
}
