#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

long long divide(long long x, long long y){
    if(y==0) return 1;
    long long res = divide(x,y/2);
    res %= mod;
    if(y%2==1) return (((res*res)%mod)*x)%mod;
    else return (res*res)%mod;
}

// long long divide(long long x, long long y){
//     long long res = 1;
//     while(y){
//         if(y%2==1) {res *= x; res %= mod;}
//         x *= x;
//         x %= mod;
//         y /= 2;
//     }
//     return res;
// }

void solution(){
    cin>>n;
    // long long tmp = n;
    // k=0;
    // while(tmp>0){
    //     k = k*10 + tmp%10;
    //     tmp/=10;
    // }
    // cout<<n<<" "<<k<<endl;
    cout<<divide(2,n-1)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}