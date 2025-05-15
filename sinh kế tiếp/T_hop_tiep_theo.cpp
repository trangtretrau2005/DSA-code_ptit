#include<bits/stdc++.h>
using namespace std;




void sinh(int a[], int n, int k){
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) cout<<k;
	else{
		cout<<a[i+1]-a[i]-1;
//		a[i]++;
//		for(int j=i+1;j<=k;j++){
//			a[j]=a[j-1]++;
//		}
//		cout<<k-i;
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,k;
		cin>>n>>k;
		int a[k+1];
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh(a,n,k);
		cout<<endl;
	}
}
