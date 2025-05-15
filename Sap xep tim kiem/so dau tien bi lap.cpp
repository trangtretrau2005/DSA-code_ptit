#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> m;
		for(int &i:a) {
			cin>>i;
			m[i]++;
		}
		bool ok=true;
		for(int &i:a){
			if(m[i]>1) {
				cout<<i<<endl;
				ok=false;
				break;
			}
		}
		if(ok) cout<<"NO"<<endl;
		
	}
}
