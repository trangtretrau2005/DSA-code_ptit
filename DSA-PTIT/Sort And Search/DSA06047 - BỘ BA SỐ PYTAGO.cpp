#include <bits/stdc++.h>

using namespace std;

long long n, m[100001];
void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);

    for(int i=n-1;i>=2;i--){
        int l=0, r=i-1;
        long long tmp = m[i]*m[i];
        while(l<r){
            if(m[l]*m[l] + m[r]*m[r] == tmp){
                cout<<"YES\n";
                return;
            }
            else if(m[l]*m[l] + m[r]*m[r] > tmp) r--;
            else l++;
        }
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}