#include <bits/stdc++.h>

using namespace std;

int n, m;
void solution(){
    cin>>n>>m;
    set<int> a;
    set<int> uniom, inter_section;

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.insert(tmp);
        uniom.insert(tmp);
    }

    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        uniom.insert(tmp);
        if(a.find(tmp)!=a.end()){
            inter_section.insert(tmp);
        }
    }

    for(int it:uniom) cout<<it<<" ";
    cout<<endl;
    for(int it:inter_section) cout<<it<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}