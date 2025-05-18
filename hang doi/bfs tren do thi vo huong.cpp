#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<int> a[n+1];
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		queue<int> q;
		q.push(k);
		bool visit[1001];
		memset(visit,true,sizeof(visit));
		while(!q.empty()){
			int t=q.front();
			q.pop();
			if(visit[t]){
				visit[t]=false;
				for(int i=0;i<a[t].size();i++){
					int t2=a[t][i];
					if(visit[t2]){
						q.push(t2);
					}
				}
				cout<<t<<" ";
			}
		}
		cout<<endl;
	}
}
