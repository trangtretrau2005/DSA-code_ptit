#include <bits/stdc++.h>

using namespace std;

long long n, tmp, k, m[1000001], tmpv[100001];
#define mod 123456789

char divide(long long n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= m[n-2]) return divide(n-2, k);
    else return divide(n-1, k-m[n-2]);
}

void solution(){
    cin>>n>>k>>tmp;
    vector<int> vt;
    while(n--){
        int x;
        cin>>x;
        vt.push_back(x);
    }
    while(k--){
        int x;
        cin>>x;
        vt.push_back(x);
    }
    sort(vt.begin(), vt.end());
    cout<<vt[tmp-1]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}