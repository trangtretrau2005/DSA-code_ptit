#include <bits/stdc++.h>

using namespace std;

unsigned long long mfibo[100];

void fibo(){
    mfibo[0] = 0; mfibo[1] = 1; mfibo[2] = 1;
    for(int i=3; i<=100; i++) mfibo[i] = mfibo[i-1] + mfibo[i-2];
}

int dequi(unsigned long long length, unsigned long long k){
    if(length == 1) return 0;
    else if(length == 2) return 1;
    if(k <= mfibo[length-2]) return dequi(length-2, k);
    else return dequi(length-1, k-mfibo[length-2]);
}

void solution(){
    unsigned long long n,k;
    cin>>n>>k;
    cout<<dequi(n, k)<<endl;
}

int main(){
    fibo();
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}