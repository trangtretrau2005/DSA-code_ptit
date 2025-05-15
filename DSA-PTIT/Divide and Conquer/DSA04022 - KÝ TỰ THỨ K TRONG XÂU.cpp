#include <bits/stdc++.h>

using namespace std;

unsigned long long mnhan[100];

void nhan(){
    mnhan[0] = 0; mnhan[1] = 1;
    for(long long i = 2; i<=30; i++){
        mnhan[i] = 2*mnhan[i-1] + 1;
    }
}

char dequi(unsigned long long length, unsigned long long k){
    if(length == 1) return 65;
    if(k==mnhan[length-1]+1) return (length-1)+'A';
    else if(k < mnhan[length-1]) return dequi(length-1, k);
    else return dequi(length-1, k-mnhan[length-1]-1);
}

void solution(){
    unsigned long long n,k;
    cin>>n>>k;
    cout<<char(dequi(n, k)) <<endl;
}

int main(){
    nhan();
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}