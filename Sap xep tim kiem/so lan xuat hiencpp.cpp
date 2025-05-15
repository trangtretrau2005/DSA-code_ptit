#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		multiset<int>x;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			x.insert(tmp);
		}
		int t=x.count(m);
		if(t==0) cout<<-1<<endl;
		else cout<<t<<endl;
		
	}
}
