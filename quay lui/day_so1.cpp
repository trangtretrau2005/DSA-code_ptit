#include <bits/stdc++.h>
using namespace std;

int n,k, a[100]; 
int tmp;

void print(int n){
	cout<<"[";
	cout<<a[0];
	for(int i=1;i<n;i++) cout<<" "<<a[i];
	cout<<"]";
	cout<<endl;
}

void Try(int i, int n){
	if(i==tmp) {
		return ;
	} 
	int t=0;
	for(int j=0;j<n;j++){
		int sum = a[j]+a[j+1];
		a[t]=sum;
		t++;
	}
	print(n-1);
	Try(i+1,n-1);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;tmp=n;
		for(int i=0;i<n;i++) cin>>a[i];
		print(n);
		Try(1,n);
	}
	
}
