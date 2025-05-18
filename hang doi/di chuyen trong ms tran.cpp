#include<bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++) cin>>a[i][j];
		int b[n+1][m+1];
		memset(b,-1,sizeof(b));
		queue<pair<int,int>> q;
		q.push({1,1});
		b[1][1]=0;
		while(!q.empty()){
			pair <int,int> p=q.front();
			q.pop();
			int f=p.first;
			int s=p.second;
				if(s+a[f][s]<=m&&s+a[f][s]>=1&&b[f][s+a[f][s]]==-1){
					b[f][s+a[f][s]]=b[f][s]+1;
					q.push({f,s+a[f][s]});
				}
				if(f+a[f][s]<=n&&s+a[f][s]>=1&&b[f+a[f][s]][s]==-1){
					b[f+a[f][s]][s]=b[f][s]+1;
					q.push({f+a[f][s],s});
				}
				if(b[n][m]!=-1) break;
			}
		cout<<b[n][m]<<endl;
	}
}
