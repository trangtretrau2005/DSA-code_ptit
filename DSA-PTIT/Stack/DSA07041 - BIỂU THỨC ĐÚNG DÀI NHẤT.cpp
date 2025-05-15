#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    stack<char> sc;
    int res = 0;
    for(char c:s){
        if(c == '(') sc.push('(');
        else{
            if(!sc.empty() && sc.top() == '('){
                sc.pop();
                res += 2;
            }
        }
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
}