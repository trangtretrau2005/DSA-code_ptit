#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

void Try(int i, int j){
    if(i==n-1 && j==k-1){
        cnt++;
        return;
    }
    for(auto it:direction){
        int i1=i + it.first, j1=j + it.second;
        if((i1>=0 && i1<n) && (j1>=0 && j1<k)){
            Try(i1,j1);
        }
    }
}

void solution(){
    cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++) for(int j=0;j<k;j++) cin>>m2c[i][j];
    Try(0,0);
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}