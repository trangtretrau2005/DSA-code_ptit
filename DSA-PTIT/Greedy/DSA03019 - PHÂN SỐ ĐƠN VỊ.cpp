#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long a, b;
    cin>>a>>b;
    vector<string> res;

    while(a!=0){
        long long tmp;
        if(b%a==0) tmp = b/a;
        else tmp = b/a+1;

        res.push_back("1/" + to_string(tmp));
        a = a*tmp - b;
        b = b*tmp;
    }
    for(int i = 0; i < int(res.size()); i++) {
        cout << res[i];
        if(i != int(res.size()) - 1) cout<<" + ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}
