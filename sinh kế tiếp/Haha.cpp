#include<bits/stdc++.h>
using namespace std;

int ok;

void ktao(char a[], int n){
	a[1]='H';
	for(int i=2;i<=n;i++) a[i]='A';
}



void sinh(char a[], int n){
	int i=n-1;
	while(i>=1&&(a[i]!='A'||a[i-1]!='A')){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]='H';
		for(int j=i+1;j<=n;j++) a[j]='A';
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		char a[n+1];
		ktao(a,n);
		ok=1;
		while(ok){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
			sinh(a,n);
		}
		
	}
}
