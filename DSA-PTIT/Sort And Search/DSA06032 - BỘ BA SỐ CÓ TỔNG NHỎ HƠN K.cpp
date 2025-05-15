#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001];

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>m[i];

    sort(m, m+n);
    long long cnt=0;
    for(int i=0;i<n-2;i++){
        if(m[i] >= k) break;
        int l=i+1, r=n-1;
        while(l<r){
            if(m[i] + m[l] + m[r] < k){
                l++;
                cnt += (r-l+1); // dem cac phan tu m[l]<X<m[r] de m[i] + m[l] + X < k
            }
            else r--;
        }
    }
    cout<<cnt<<endl;
// cach 2
//long long cnt=0;
  //  for(int i=0;i<n;i++){
    //    if(m[i] >=k ) break;
      //  for(int j=i+1;j<n;j++){
        //    if(m[j]>=k) break;
          //  long long *it = lower_bound(m+j+1,m+n,k-m[i]-m[j]);
            //cnt += (it-m-j-1);
        //}
    //}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}