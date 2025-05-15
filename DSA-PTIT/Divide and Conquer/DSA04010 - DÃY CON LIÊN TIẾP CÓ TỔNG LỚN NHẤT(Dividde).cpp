#include <bits/stdc++.h>

using namespace std;

int m[100001];

int max_sum_r_l(int m[], int l, int mid, int r){
    int l_sum = 0, r_sum = 0, tmp=0;
    for(int i=mid; i>=l; i--){
        tmp += m[i];
        l_sum = max(l_sum, tmp);
    }
    tmp=0;
    for(int i=mid+1; i<=r; i++){
        tmp += m[i];
        r_sum = max(r_sum, tmp);
    }

    return l_sum + r_sum;
}

int divide_and_conquer(int m[], int l, int r){
    if(l == r) return m[l];
    int mid = (l+r)/2;
    int left = divide_and_conquer(m, l, mid);
    int right = divide_and_conquer(m, mid+1, r);
    int res = max_sum_r_l(m, l, mid, r);
    return res = max({left, right, res});
}

void solution(){
    int n;
    cin>>n;
    // kande algorithm
    for(int i=0; i<n; i++) cin>>m[i];
    cout<<divide_and_conquer(m, 0, n-1)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}