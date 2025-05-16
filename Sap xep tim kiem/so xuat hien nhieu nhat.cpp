#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int tmp=n;
		int m=-1e9;
		map<int,int> ma;
		int va;
		while(n--){
			int t;
			cin>>t;
			ma[t]++;
			if(ma[t]>m) {
				va=t;
				m=ma[t];
			}
		}
		if(m>tmp/2) cout<<va<<endl;
		else cout<<"NO"<<endl;
	}
}
