#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1][n+1];
	vector<int> b[n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]){
				b[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<b[i].size();j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
