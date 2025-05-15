#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    if(s == ""){
        cout<<"YES\n";
        return;
    }
    stack<char> sc;
    // [()]{}{[()()]()}
    for(int i=0; i<int(s.length());i++){
        if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            if(sc.empty()){
                cout<<"NO\n";
                return;
            }
            else if(s[i] == ')' && sc.top() == '(') sc.pop();
            else if(s[i] == '}' && sc.top() == '{') sc.pop();
            else if(s[i] == ']' && sc.top() == '[') sc.pop();
        }
        else sc.push(s[i]);
    }
    if(sc.empty()) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        solution();
    }
}