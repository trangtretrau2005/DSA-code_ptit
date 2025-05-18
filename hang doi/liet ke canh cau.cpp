#include<bits/stdc++.h>
using namespace std;

vector<int> a[1001];
bool check[1001];
vector<pair<int,int>> p;
int n,m;

void dfs(int x,int u,int v){
		for(auto i:a[x]){
			if((x == u && i == v) || (x == v && i == u)) continue;
			
			if(!check[i]){
				check[i]=true;
				dfs(i,u,v);
			}	
		}
	}

void ok(){
	for(auto i: p){
		int x=i.first;
		int y=i.second;
		int cnt=0;
		memset(check,false,sizeof(check));
		for(int i=1;i<=n;i++){
			if(!check[i]){
				cnt++;
				dfs(i,x,y);
			}
		}
		if(cnt>1) 
		{
			cout<<min(x,y)<<" "<<max(x,y)<<" ";
		}
	}
	
}


int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			memset(check,false,sizeof(check));
			a[x].push_back(y);
			a[y].push_back(x);
			p.push_back({x,y});
		}
		ok();
		p.clear();
for (int i = 1; i <= n; i++) {
    a[i].clear();
}
	cout<<endl;
	}
}
