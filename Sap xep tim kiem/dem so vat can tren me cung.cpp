#include<bits/stdc++.h>
using namespace std;

bool check[10001][10001]={false};
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
int cnt=0;
int n,m;
char a[10001][10001];
void dfs(int x,int y){
	check[x][y]=true;
	for(int i=0;i<4;i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx >= 0 && xx < n && yy >= 0 && yy < m&&!check[xx][yy]&&a[xx][yy]=='#'){
				dfs(xx,yy);
			}
		}
	}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>a[i][j];	
		}
	}
	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '#' && !check[i][j]){
                cnt++;
                dfs(i, j);
            }
        }
    }
	cout<<cnt;
	
}
