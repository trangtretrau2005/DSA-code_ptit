#include <bits/stdc++.h>

using namespace std;

int m[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n;

void solution(){
    int cnt = 0;
    cin>>n;    
    for(int i=9;i>=0;i--){
        int tmp = n/m[i];
        cnt += tmp;
        n -= tmp*m[i];
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}