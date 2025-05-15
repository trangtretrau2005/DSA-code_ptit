#include <bits/stdc++.h>

using namespace std;

vector<string> lap_phuong;
void khoi_tao(){
    for(long long i=0; i<=100000; i++){
        lap_phuong.push_back(to_string(i*i*i));
    }
}

bool check(string lp, string x){
    int i = 0;
    for(char it:x){
        if(i < int(lp.length()) && it == lp[i]) i++;
    }
    if(i == int(lp.length())) return true;
    return false;
}

void solution(){
    string n; cin>>n;
    for(int i=lap_phuong.size()-1; i>=0; i--){
        if(check(lap_phuong[i], n)){
            cout<<lap_phuong[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    khoi_tao();
    while(t--){
        solution();
    }
    return 0;
}
