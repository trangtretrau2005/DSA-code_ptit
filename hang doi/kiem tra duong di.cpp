#include<bits/stdc++.h>
using namespace std;

vector<int> a[1001];
queue<int> q;
bool check[1001];

void bfs(int y){
	while(!q.empty()){
		int t=q.front();
	q.pop();
		if(!check[t]){
		check[t]=true;
		for(int i:a[t]){
			if(!check[i]){
				q.push(i);
			}
		}
	}
	}

}


int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		for (int i = 1; i <= n; i++) a[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int n2;
		cin>>n2;
		while(n2--){
			memset(check,false,sizeof(check));
			int x,y;
			cin>>x>>y;
			q.push(x);
			bfs(y);
			if(check[y]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
