#include <bits/stdc++.h>

using namespace std;

int n,m;
set<int> st[10001];

void solution(){
    cin>>n; cin.ignore();
    vector<string> vts;
    for(int i=1; i<=n ; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>s){
            int tmp = stoi(s);
            if(tmp > i){
                cout<<i<<" "<<tmp<<endl;
                // string res = to_string(i) + " " + to_string(tmp);
                // vts.push_back(res);
            }
        }
    }
    // for(string it:vts) cout<<it<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}