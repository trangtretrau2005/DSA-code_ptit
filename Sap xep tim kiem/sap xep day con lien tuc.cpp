#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int &i:a) cin>>i;
		copy(a,a+n,b);
		sort(b,b+n);
		int x,y;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				x=i;
				break;
			}
		}
		for(int i=n-1;i>=x;i--){
			if(a[i]!=b[i]) {
				y=i;
				break;
			}
		}
		cout<<x+1<<" "<<y+1<<endl;
	}
}
