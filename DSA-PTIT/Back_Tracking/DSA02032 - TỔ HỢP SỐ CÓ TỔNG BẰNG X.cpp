#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

vector<vector<int>> vvt;
void Try(int i, int sum){
    if(sum==k){
        cnt++;
        check=true;
        vector<int> vt;
        for(int j=1;j<=i-1;j++) vt.push_back(m[tmpv[j]]);
        vvt.push_back(vt);
    }
    for(int j=tmpv[i-1]; j<=n; j++){
        if(m[j]+sum <= k){
            tmpv[i] = j;
            Try(i+1, sum+m[j]);
        }
    }
}

void solution(){
    cnt=0; vvt.clear(); check=false;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>m[i];
    tmpv[0] = 1;
    Try(1,0);
    if(check){
        cout<<cnt<<" ";
        for(vector<int> vt:vvt){
            cout<<'{';
            for(int i=0; i<int(vt.size());i++){
                cout<<vt[i];
                if(i!=int(vt.size())-1) cout<<' ';
            }
            cout<<"} ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}