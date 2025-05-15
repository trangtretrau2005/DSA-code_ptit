#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long n;
    string s;
    cin>>n>>s;

    long long sum = n*(n-1)/2; // cong thuc tong so xau con co do dai lon hon 2
    // vi du: AABB thi co cac xau con nhu: AA, AAB, AABB, AB, ABB, BB => sum = 4*3/2 = 6

    vector<int> v; // vector chua cac block giong nhau AA, BB
    int cnt=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) cnt++;
        else{
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);
    // dem cac xau tot = tong xau con - xau khong tot
    // ví dụ: ABBA-> sum = 6
    // v = 1, 2, 1
    // -> A va BB co xau con AB la xau khong tot -> so xau tot = 2 + 1 - 1 = 2;
    // tuong tu voi BB va A xau con khong tot la BA -> so xau tot = 2+1 -1 = 2;
    for(int i=1; i<int(v.size()); i++){
        sum -= (v[i] + v[i-1] - 1);
    }
    cout<<sum;
}

// create by TamDaE
int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}