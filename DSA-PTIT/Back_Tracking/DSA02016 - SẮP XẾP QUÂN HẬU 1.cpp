#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

int cot[1001], cheo_xuoi[1001], cheo_nguoc[1001];
void Try(int i){
    if(i==n+1){
        cnt++;
        return;
    }
    for(int j=1;j<=n;j++){
        if(cot[j] == 0 && cheo_xuoi[i-j+n] == 0 && cheo_nguoc[i+j-1] == 0){
            cot[j] = 1;
            cheo_xuoi[i-j+n] = 1;
            cheo_nguoc[i+j-1] = 1;

            Try(i+1);

            cot[j] = 0;
            cheo_xuoi[i-j+n] = 0;
            cheo_nguoc[i+j-1] = 0;
        }
    }
}

void solution(){
    cnt=0;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return;
    }
    Try(1);
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}