#include <bits/stdc++.h>

using namespace std;

int n;
void solution(){
    cin>>n;
    set<int> st;
    while(n--){
        int tmp;
        cin>>tmp;
        st.insert(tmp);
    }
    if(st.size()<2) cout<<-1<<endl;
    else{
        set<int>::iterator it=st.begin();
        cout<<*it<<" ";
        it++;
        cout<<*it<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}