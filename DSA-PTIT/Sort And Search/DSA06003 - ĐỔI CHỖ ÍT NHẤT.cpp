#include <bits/stdc++.h>

using namespace std;

// selection sort cai tien
int n, m[1001];
int solution(){
    vector<int> vt;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>m[i]; vt.push_back(m[i]);}
    sort(vt.begin(), vt.end());

    int res=0;
    for(int i=0;i<n;i++){
        if(vt[i] != m[i]){
            for(int j=i+1;j<n;j++){
                if(vt[i] == m[j]){
                    swap(m[i], m[j]);
                    res++;
                    break;
                }
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solution()<<endl;
    }
}