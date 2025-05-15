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
		int l=0,r=n-1;
		int s=abs(a[l]-a[r]);
		int ok=0;
		while(l<r){	
			if(abs(a[l]-a[r])>s){
				ok=1;
				break;
			}
			s=abs(a[l]-a[r]);
			l++;
			r--;
		}
		if(ok)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
