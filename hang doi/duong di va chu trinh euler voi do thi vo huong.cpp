#include<bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> a[1001];

void dfs(int x){
	if(!check[x]){
		check[x]=true;
		for(int i:a[x])
{
	if(!check[i]){
		dfs(i);
	}
	}	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++) a[i].clear();
		memset(check,false,sizeof(check));
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int start = 1;
			for (int i = 1; i <= n; i++) {
    			if (!a[i].empty()) {
        			start = i;
        			break;
    			}
			}
		dfs(start);
		int ok=-1;
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i].size()>0&&check[i]==false) {
				ok=0;
				break;
			}
			if(a[i].size()%2!=0) cnt++;
		}
		if(ok==0) cout<<ok<<endl;
		else if(ok!=0&&cnt==0) cout<<2<<endl;
		else if (ok!=0&&cnt==2) cout<<1<<endl;
		else cout << 0 << endl;

		
	}
}
