#include <bits/stdc++.h>

using namespace std;

int n, m[1000];

void in(){
    for(int i=0;i<n;i++) cout<<m[i]<<" ";
    cout<<endl;
}


void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];

    vector<string> vts;
    int cnt=1;
    for(int i=0;i<n;i++){
        bool check = false;
        for(int j=0; j<n-i-1; j++){
            if(m[j] > m[j+1]){
                swap(m[j+1],m[j]);
                check = true;
            }
        }
        if(check){
            string res ="Buoc " + to_string(cnt++) + ": ";
            for(int k=0;k<n;k++) res += to_string(m[k]) + " ";
            vts.push_back(res);
        }
    }
    for(int i=vts.size()-1;i>=0;i--) cout<<vts[i]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}