#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    stack<char> sc;
    int cnt = 0;
    for(int i=0; i<int(s.length()); i++){
        if(s[i] == ')'){
            if(sc.empty()){
                cnt++;
                sc.push('(');
            }
            else sc.pop();
        }
        else{
            sc.push('(');
        }
    }
    cout<<cnt<<" "<<sc.size()<<" ";
    cout<<cnt + sc.size()/2 <<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}
