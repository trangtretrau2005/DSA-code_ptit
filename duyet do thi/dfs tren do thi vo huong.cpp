#include<bits/stdc++.h>
using namespace std;
int ok=0;
vector<int> a[1001];
bool check[1001]={false};
int b[1001];
void dfs(int t){
	b[ok]=t;
	ok++;
	check[t]=true;
	for(int i=0;i<a[t].size();i++){
		if(check[a[t][i]]==false){
			dfs(a[t][i]);
	}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m,k,t;
		memset(check,false,sizeof(check));
		cin>>n>>m>>k>>t;
		for(int i = 1;i<= n; i++) a[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
	dfs(k);	
	for(int i=0;i<n;i++){
		if(b[i]==t){cout<<b[i];
		break;
		}
	}
	cout<<endl;
	}
}
