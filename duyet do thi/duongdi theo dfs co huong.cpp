#include<bits/stdc++.h>
using namespace std;


vector<int> a[1005];
int parent[1005];
bool check[1005];

void dfs(int t){
	for(int i=0;i<a[t].size();i++){
		if(check[a[t][i]]==false){
			check[a[t][i]]=true;
			parent[a[t][i]]=t;
			dfs(a[t][i]);
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		memset(check,false,sizeof(check));
		int n,b,c,d;
		cin>>n>>b>>c>>d;
		for(int i=1;i<=n;i++) a[i].clear();
		for(int i=1;i<=b;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		dfs(c);
		 if(check[d]){
            vector<int> path;
            while(c != d){
                path.push_back(d);
                d = parent[d];
            }
            cout << c << " ";
            for(int i = path.size() - 1; i >= 0; i--) cout << path[i] << " ";                     
        }
        else cout << -1;
        cout << "\n";
	}
}
