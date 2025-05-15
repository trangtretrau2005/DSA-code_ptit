#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    string s;
    cin>>s;
    map<char, int> mpc;
    for(char it:s) mpc[it]++;
    map<char,int>::reverse_iterator tmp = mpc.rbegin();
    int max = tmp->second;
    if(max*n > int(s.size()+1)) cout<<-1<<endl;
    else cout<<1<<endl;
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
