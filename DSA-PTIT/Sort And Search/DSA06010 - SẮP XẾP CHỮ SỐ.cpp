#include <bits/stdc++.h>

using namespace std;

int n;
void solution(){
    set<int> st;
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        while(tmp>0){
            st.insert(tmp%10);
            tmp/=10;
        }
    }
    for(int it:st) cout<<it<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}