#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

void Try(int n, char A, char B, char C){

    // bai toan con nho nhat n=1 => A->C
    if(n==1){
        cout<<A<<" -> "<<C<<endl;
        return;
    }

    // chuyen n-1 dia A->B
    Try(n-1,A,C,B);
    // bai toan nho nhat
    Try(1,A,B,C);
    // chuyen n-1 dia tu B->C
    Try(n-1,B,A,C);
}

void solution(){
    cin>>n;
    char A='A',B='B',C='C';
    Try(n,A,B,C);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}