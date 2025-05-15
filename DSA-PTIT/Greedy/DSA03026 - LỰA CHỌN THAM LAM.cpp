#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n, s;
    cin>>n>>s;
    if(n==1 && s==0){ cout<<0<<" "<<0; return;}
    if(s > 9*n || (n==0 && s==0)){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    vector<int> smin(105, 0), smax(105, 0);

    int tmp = s;
    // max
    for(int i=0; i<n; i++){
        if(s<=9){ smax[i] = s; s=0;}
        else{
            smax[i] = 9;
            s-=9;
        }
    }

    s = tmp;
    //min
    for(int i=n-1; i>=0; i--){
        if(s>9){
            smin[i] = 9;
            s-=9;
        }
        else {smin[i] = s; s=0;}
    }
    if(smin[0] == 0){
        int i = 0;
        while(smin[i]==0 && i<n) i++;
        smin[0] = 1;
        if(smin[i]) smin[i]--;
        else{
            cout<<-1<<" "<<-1<<endl;
            return;
        }
    }
    
    for(int i=0; i<n; i++) cout<<smin[i];
    cout<<" ";
    for(int i=0; i<n; i++) cout<<smax[i];
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
    return 0;
}
