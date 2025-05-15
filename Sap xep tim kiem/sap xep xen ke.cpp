#include<bits/stdc++.h>
using namespace std;


int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int l=0;
		int r=n-1;
		while(l<=r){
			if(l==r) {
			cout<<a[l];
			break;
			}
			else {
				cout<<a[r]<<" "<<a[l]<<" ";
				r--;
				l++;
			}
		}
		cout<<endl;
	}
}
