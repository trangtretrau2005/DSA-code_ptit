#include <bits/stdc++.h>

using namespace std;

int n;

void solution(){
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        st.insert(tmp);
    }
    set<int>::iterator it = st.begin();
    int l = *it;
    set<int>::reverse_iterator it1 = st.rbegin();
    int r = *it1;
    // cout<<l' 'rendl;
    cout<< (r-l+1) - st.size()<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}