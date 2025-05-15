#include <bits/stdc++.h>

using namespace std;

int n, k, purpos, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;                 // D,   L,      R          U
pair<int,int> direction[4] = {{1,0}, {0,-1}, {0,1}, {-1,0}};

vector<int> so_nt;

bool ktr_snt(int x){
    if(x<=1) return false;
    for(int i=2; i<=sqrt(x); i++) if(x%i==0) return false;
    return true;
}

void sang(){
    for(int i=0;i<=200;i++){
        if(mang[i] == 0 && ktr_snt(i)){
            so_nt.push_back(i);
            for(int j=i*i;j<=200;j+=i) mang[j] = 1;
        }
        //else mang[i] = 1;
    }
}


void in(){
    for(int j=1; j<=k; j++) cout<<m[tmpv[j]]<<" ";
    cout<<endl;
}

void Try(int i,int sum){
    if( i==k+1 && sum==purpos){
        in();
        return;
    }
    for(int j=tmpv[i-1]+1; j<=n; j++){
        if(sum + m[j] <= purpos){
            tmpv[i] = j;
            Try(i+1, sum + m[j]);
        }
    }
}

void solution(){
    cin>>k>>n>>purpos;
    int I=1;
    for(int i=0;i<int(so_nt.size());i++){
        if(so_nt[i] > n && so_nt[i] <= purpos){
            m[I++] = so_nt[i];
            // cout<<m[I-1]<<'-';
        }
    }
    n=I-1;
    cout<<++cnt<<endl;
    Try(1,0);
}

int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        solution();
    }
}