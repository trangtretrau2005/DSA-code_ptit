#include<bits/stdc++.h>
using namespace std;

int ok=0;

void ktao(int a[],int n){
	for(int i=1;i<=n;i++) a[i]=i;
}

void sinh(int a[], int n){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=1;
	else{
		int j=n;
		while(j>=1&&a[i]>a[j]){
			j--;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		ok=0;
		int a[n+1];
		ktao(a,n+1);
		while(ok==0){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
			sinh(a,n);
			
		}
		cout<<endl;
	}
}
