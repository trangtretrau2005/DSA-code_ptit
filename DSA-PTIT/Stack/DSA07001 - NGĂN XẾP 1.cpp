#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void in(stack<int> st){
    if(st.empty()) return;
    int tmp = st.top();
    st.pop();
    in(st);
    cout<<tmp<<" ";
}

void solution(){
    stack<int> st;
    string s;
    while(cin>>s){
        if(s == "push"){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(s == "pop"){
            if(!s.empty()) st.pop();
        }
        else if(s == "show"){
            if(st.empty()) cout<<"empty";
            else in(st);
            cout<<endl;
        }
        // cout<<endl;
    }
    
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}