#include<bits/stdc++.h>
using namespace std;

bool used[100][100]={false};

void Try(int &cnt,int a[100][100],int m, int n, int i, int j){
	if(i==m-1&&j==n-1){
		cnt++;
		return;
	}
	if(i+1<m&&used[i+1][j]==false){
		used[i+1][j]=true;
		Try(cnt,a,m,n,i+1,j);
		used[i+1][j]=false;
	}
	if(j+1<n&&used[i][j+1]==false){
		used[i][j+1]=true;
		Try(cnt,a,m,n,i,j+1);
		used[i][j+1]=false;
	}
}


int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int m,n;
		cin>>m>>n;
		int a[100][100];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		int cnt = 0;
        used[0][0] = true;
        Try(cnt, a, m, n, 0, 0);
        cout << cnt << endl;
	}
}
