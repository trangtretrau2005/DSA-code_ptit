#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(long long &i:a) cin>>i;
		sort(a,a+n);
		long long kq=0;
		for(int i=0;i<n-2;i++){
			int l=i+1; int r=n-1;
			while(l<r){
				long long sum = a[l]+a[r]+a[i];
				if(sum<k){
					
					kq+=r-l;
					l++;
				}
				else r--;
			}
		}
		cout<<kq<<endl;
	}
}
