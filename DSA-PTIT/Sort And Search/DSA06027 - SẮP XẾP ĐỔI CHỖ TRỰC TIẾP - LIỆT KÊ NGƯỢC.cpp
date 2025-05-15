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
    for(int i=0;i<n;i++){
        bool check = false;
        for(int j=i+1;j<n;j++){
            if(m[i]>m[j]) {
                swap(m[i], m[j]);
                check=true;
            }
        }
        if(check){
            string res="Buoc " + to_string(i+1) + ": ";
            for(int i=0;i<n;i++){
                // Buoc 5: 1 3 4 5 8 9
                res += to_string(m[i]) + " ";
            }
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