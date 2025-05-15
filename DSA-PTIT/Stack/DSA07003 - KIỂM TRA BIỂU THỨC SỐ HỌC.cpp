#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    string s;
    getline(cin,s);
    stack<char> sc;
    for(int i=0; i<int(s.length()); i++){
        if(s[i] == ')'){
            bool check = false;
            while(!sc.empty() && sc.top() != '('){
                char tmp = sc.top();
                sc.pop();
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/') check = true;
            }
            if(!check){
                cout<<"Yes\n";
                return;
            }
            sc.pop();
        }
        else sc.push(s[i]);
    }
    cout<<"No\n";
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}