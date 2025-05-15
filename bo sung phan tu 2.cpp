#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i:a) cin>>i;
		sort(a,a+n);
		int cnt=0;
		for(int i=1;i<n;i++){
			int tmp=a[i-1];
			while(a[i]!=tmp){
				cout<<a[i]<<" "<<tmp;
				cnt++;
				tmp++;
			}
		}
		cout<<cnt<<endl;
	}
}
