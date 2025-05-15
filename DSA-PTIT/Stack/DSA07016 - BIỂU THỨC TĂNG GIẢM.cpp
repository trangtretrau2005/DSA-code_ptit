#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void inD(stack<int> &st){
    if(st.empty()) return;
    int tmp = st.top();
    cout<<tmp;
    st.pop();
    inD(st);
}

void solution(){
    stack<int> ss;
    string s;
    cin>>s;
    for(int i=0; i<=int(s.length()); i++){
        ss.push(i+1);
        if(i == s.length() || s[i] == 'I') inD(ss);
        
    }
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