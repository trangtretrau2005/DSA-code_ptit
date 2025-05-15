#include<bits/stdc++.h>
using namespace std;

int check(int a,int b,int c){
	return max(a,max(b,c));
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &i:a) cin>>i;
		for(int i=0;i<n-k+1;i++){
			int max=a[i];
			for(int j=0;j<k;j++){
				if(max<a[i+j]) max=a[i+j];
			}
			cout<<max<<" ";
		}
		cout<<endl;
	}
}
