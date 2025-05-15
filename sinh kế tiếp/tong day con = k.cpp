#include <bits/stdc++.h>
using namespace std;

int a[100],b[100],ok=1;

void kt(int n){
	for(int i=1;i<=n;i++) b[i]=0; 
}

void check(int n){
	int i=n;
	while(i>=1&&b[i]==1){
		b[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else b[i]=1;
}

int main(){
	int n,k,sum=0,cnt=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(ok){
		for(int i=1;i<=n;i++){
			if(b[i]) sum+=a[i]; 
		}
		if(sum==k){
			cnt++;
			for(int i=1;i<=n;i++){
				if(b[i]) cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		sum=0;
		check(n);
	}
	cout<<cnt;
	
}
