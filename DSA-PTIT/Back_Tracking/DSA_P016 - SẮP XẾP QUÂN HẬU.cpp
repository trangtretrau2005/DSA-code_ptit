#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

int cot[10], c_xuoi[10], c_nguoc[10];

void Try(int i, int chi_phi){
    // if(chi_phi <= k){
        if(i==9){
            k = max(k, chi_phi);
            return;
        }

        for(int j=1;j<=8;j++){
            if(cot[j] == 0 && c_xuoi[i+j-1] == 0 && c_nguoc[i-j+n] == 0){
                cot[j] = 1;
                c_xuoi[i+j-1] = 1;
                c_nguoc[i-j+n] = 1;

                Try(i+1, chi_phi + m2c[i][j]);

                cot[j] = 0;
                c_xuoi[i+j-1] = 0;
                c_nguoc[i-j+n] = 0;
            }
        }
    // }
}

void solution(){
    cnt++; k=0;
    for(int i=1;i<=8;i++) for(int j=1;j<=8;j++) cin>>m2c[i][j];
    Try(1,0);
    cout<<"Test "<<cnt<<": "<<k<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}