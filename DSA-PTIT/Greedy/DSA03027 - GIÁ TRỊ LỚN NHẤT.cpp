#include <bits/stdc++.h>

using namespace std;

bool check(int pos, vector<int> a){
    for(int i=0 ; i<int(a.size()); i++){
        if(a[i]/pos == a[i]/(pos+1)) return false;
    }
    return true;
}

void solution(){
    int n;
    cin>>n;
    long long res = 0, tmp;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(tmp > 0) res += tmp;
    }
    cout<<2*res<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
    return 0;
}
