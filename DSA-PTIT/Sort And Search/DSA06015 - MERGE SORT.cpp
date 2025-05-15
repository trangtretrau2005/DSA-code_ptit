#include <bits/stdc++.h>

using namespace std;

int n, m[100001];

void merge(int m[], int st, int mid, int end){
    vector<int> a(m + st, m + mid + 1);
    vector<int> b(m + mid + 1, m + end + 1);

    int i=0, j=0, im = a.size(), jm = b.size();
    while(i<im && j<jm){
        if(a[i] <= b[j]) m[st++] = a[i++];
        else m[st++] = b[j++];
    }

    while(i<im) m[st++] = a[i++];
    while(j<jm) m[st++] = b[j++];
}

void merge_sort(int m[], int st, int end){
    if(st>=end) return;
    int mid = (st+end)/2;

    merge_sort(m, st, mid);
    merge_sort(m, mid+1, end);
    merge(m, st, mid, end);
}

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    merge_sort(m,0,n-1);
    for(int i=0;i<n;i++) cout<<m[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}