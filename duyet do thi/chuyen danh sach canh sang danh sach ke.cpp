#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m;
		cin>>n>>m;
		vector<int> a[n+1];
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[y].push_back(x);
			a[x].push_back(y);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int j=0;j<a[i].size();j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
