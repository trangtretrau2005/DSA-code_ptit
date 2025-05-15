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
    vector<int> a(n);
    int min1=INT_MAX;
    for(int &it:a) {cin>>it; min1 = min(min1, it);}

    long long res = 0;
    for(int i=min1; i>=0; i--){
        if(check(i, a)){
            for(int j=0; j<n; j++){
                res += 1LL*a[j]/(i+1) + 1;
            }
            break;
        }
    }
    cout<<res<<endl;

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
