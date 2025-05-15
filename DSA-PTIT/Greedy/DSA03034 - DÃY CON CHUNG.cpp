#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n), b(m), c(k);
    for(int &it:a) cin>>it;
    for(int &it:b) cin>>it;
    for(int &it:c) cin>>it;
    
    bool check = false;
    for(int i=0; i<n; i++){
        vector<int>::iterator it1 = lower_bound(b.begin(), b.end(), a[i]), it2 = lower_bound(c.begin(), c.end(), a[i]);
        if(a[i] == *it1 && a[i] == *it2){
            cout<<a[i]<<" ";
            b.erase(it1);
            c.erase(it2);
            check = true;
        }
    }
    if(!check) cout<<"NO";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}