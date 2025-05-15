#include <bits/stdc++.h>

using namespace std;

int n, m[10001];

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m, m+n);

    int l=0, r=n-1, res=INT_MAX;
    while(l<r){
        int sum = m[l] + m[r];
        if(sum > 0) r--;
        else if(sum < 0) l++;
        else{
            res = 0;
            break;
        }
        if(abs(res) > abs(sum)) res = sum;
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}