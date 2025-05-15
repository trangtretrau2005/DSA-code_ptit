#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        multiset<int> mtlset;
        int n;
        cin>>n;
        while(n--){
            int tmp;
            cin>>tmp;
            mtlset.insert(tmp);
        }
        for(int it:mtlset) cout<<it<<" ";
        cout<<endl;
    }
}