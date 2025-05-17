#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++) cin>>a[i][j];
		int b[n][m];
		memset(b,sizeof(),-1);
		b[1][1]=0;
		queue<pair<int,int>> q;
		q.push({1,1});
		while(!q.empty()){
			pair<int,int> tmp =q.front(); q.pop();
			int i= tmp.first, j=tmp.second;
			if(i<=n and i>=1 and j+a[i][j]<=m and j+a[i][j]>=1 and c[i][j+a[i][j]]==-1){
				q.push({i,j+a[i][j]});
				c[i][j+a[i][j]]=c[i][j]+1;
			}
		}
}
