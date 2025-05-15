#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001];

long long c2n(int x){
    return 1LL*x*(x-1)/2;
}

void solution(){
    cin>>n>>k;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>m[i];
        mp[m[i]]++;
    }

    long long cnt=0;
    if(k%2==0){
        int tmp = k/2;
        if(mp.count(tmp)!=0){
            cnt += c2n(mp[tmp]);
        }
        mp[tmp] = 0;
    }

    for(auto it:mp){
        int tmp = k - it.first;
        if(mp.count(tmp)!=0){
            cnt += 1LL*mp[tmp]*it.second;
            mp[tmp] = 0;
        }
    }

    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}