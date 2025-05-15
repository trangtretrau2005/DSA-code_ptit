#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		vector<int> x;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			x.push_back(tmp);
		}
		sort(x.begin(),x.end());
		for(int i=x.size()-1;i>=x.size()-m;i--)
		cout<<x[i]<<" ";
		cout<<endl;
	}
}
