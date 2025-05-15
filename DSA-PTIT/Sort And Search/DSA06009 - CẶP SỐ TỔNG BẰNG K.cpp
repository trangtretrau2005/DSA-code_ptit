#include <bits/stdc++.h>

using namespace std;

int n, s;

int c2n(int sl){
    return sl*(sl-1)/2;
}

void solution(){
    map<int,int> mp;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        mp[tmp]++;
    }
    int cnt=0;
    if(s%2==0){
        int x = s/2;
        cnt += c2n(mp[x]);
        mp[x] = 0;
    }
    for(auto it:mp){
        int x = s-it.first;
        if(mp.count(x)!=0){
            cnt += mp[x]*it.second;
            mp[x] = 0;
        }
    }
    cout<<cnt<<endl;
}

// cach 2
// void solution(){
//     set<int> st;
//     cin>>n>>s;
//     for(int i=0;i<n;i++) {cin>>m[i]; st.insert(m[i]);}
//     int cnt=0;
//     sort(m,m+n);

//     if(s%2==0){
//         int tmp = s/2;
//         if(st.find(tmp) != st.end()){
//             int it1 = upper_bound(m,m+n,tmp) - lower_bound(m,m+n,tmp);
//             cnt += c2n(it1);
//             st.erase(tmp);
//         }
//     }
//     for(auto it:st){
//         int tmp = s - it;
//         if(st.find(tmp) != st.end()){
//             int it1 = (upper_bound(m,m+n, it) - lower_bound(m,m+n,it)) * (upper_bound(m,m+n,tmp) - lower_bound(m,m+n,tmp));
//             cnt += it1;
//             st.erase(tmp);
//         }
//     }
//     cout<<cnt<<endl;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}