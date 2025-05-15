#include<bits/stdc++.h>
using namespace std;

int ok;

void ktao(char a[], int n){
	for(int i=1;i<=n;i++) a[i]='A';
	
}

void sinh(char a[], int n){
	int i=n;
	while(i>=1&&a[i]=='B'){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]='B';
		for(int j=i+1;j<=n;j++){
			a[j]='A';
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		char a[n+1];
		ok=1;
		ktao(a,n);
		while(ok){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
			sinh(a,n);
		}
		cout<<endl;
	}
}
