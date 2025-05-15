#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,k;
    cin>>n>>k;
    if(9*k < n){
        cout<<-1<<endl;
        return;
    }
    vector<int> m(k+1);
    for(int i=k; i>=1; i--){
        if(n>=9){n-=9; m[i] = 9;}
        else{m[i] = n; n=0;}
    }

    if(m[1] == 0){
        for(int i=2; i<=k; i++){
            if(m[i]>0){
                m[1] = 1;
                m[i]-=1;
                break;
            }
        }
    }
    for(int i=1; i<=k; i++) cout<<m[i];
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}