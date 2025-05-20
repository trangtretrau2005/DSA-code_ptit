#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(long long &i:a) cin>>i;
		sort(a,a+n);
		long long cnt=0;
		for(int i=0;i<n-1;i++){
			cnt += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
			
		}
		cout<<cnt<<endl;
	}
}
