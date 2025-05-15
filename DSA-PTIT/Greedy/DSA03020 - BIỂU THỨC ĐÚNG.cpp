#include <bits/stdc++.h>

using namespace std;

void solution(){
    stack<char> stc;
    string s;
    cin>>s;
    int res = 0, cnt;
    for(int i=0; i<int(s.length()); i++){
        if(stc.empty()){ stc.push(s[i]); cnt = 0;}
        else if(stc.top()=='[' && s[i] == ']') {cnt+=2; stc.pop();}
        else if(stc.top()==']' && s[i] == '['){
            res += cnt+stc.size(); 
            stc.pop();
        }
        else if(stc.top() == ']' && s[i] == ']') stc.push(']');
        else if(s[i]=='[') stc.push('[');
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}