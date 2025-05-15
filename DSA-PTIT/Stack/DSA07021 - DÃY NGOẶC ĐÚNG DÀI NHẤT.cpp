#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    stack<int> svt;
    svt.push(-1);
    int max_length = 0;
    for(int i=0; i<int(s.length()); i++){
        if(s[i] == ')'){
            svt.pop();
            if(!svt.empty()) max_length = max(max_length, i-svt.top());
            else svt.push(i);
        }
        else svt.push(i);
    } 
    cout<<max_length<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}