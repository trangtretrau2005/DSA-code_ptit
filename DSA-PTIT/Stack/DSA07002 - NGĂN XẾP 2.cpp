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
    int t;
    cin>>t;
    stack<int> st;
    while(t--){
        string s;
        cin>>s;
        if(s == "PRINT"){
            if(st.empty()) cout<<"NONE";
            else cout<<st.top();
            cout<<endl;
        }
        else if(s == "PUSH"){
            int x;
            cin>>x;
            st.push(x);
        }
        else{
            if(!st.empty()) st.pop();
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}