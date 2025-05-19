#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		vector<int> a[n+1];
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
		}
		queue<int> q;
		bool check[n+1];
		fill(check, check + n + 1, false);		
		q.push(x);
		int parent[n+1];
		fill(parent, parent + n + 1, -1);
		while (!q.empty()) {
			int f = q.front(); q.pop();
			for (int i : a[f]) {
				if (!check[i]) {
					check[i] = true;
					parent[i] = f;
					q.push(i);
				}
			}
		}
		vector<int> v;
		if(check[y]){
			while(x!=y){
			v.push_back(y);
			y=parent[y];
		}
		cout<<x<<" ";
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
		}
		else cout<<-1<<endl;
	}
}
