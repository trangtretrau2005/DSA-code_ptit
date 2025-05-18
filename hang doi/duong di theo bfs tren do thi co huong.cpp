#include<bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,k,h;
		cin>>n>>m>>k>>h;
		vector<int> a[n+1];
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		bool check[n+1];
		memset(check,false,sizeof(check));
		queue<int> q;
		q.push(k);
		while(!q.empty()){
			int t=q.front();
			q.pop();
			if(!check[t]){
				check[t]=true;
				cout<<t<<" ";
				if(t==h) break;
				for(auto i: a[t]){
				if(!check[i]){
					q.push(i);
				}
			}
			}
			
		}
		
		cout<<endl;
	}
}
