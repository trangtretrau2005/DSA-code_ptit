#include <bits/stdc++.h>
using namespace std;

int a[100],ok=1;

void kt(int n){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}

void print(int n){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

void check(int n){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else a[i]=1;
}

int ck1(int n){
	int l=1,r=n, m=n/2;
	while(l<=m){
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	if(l=m) return 1;
	else return 0;
}
int main(){
	int n;
	cin>>n;
	kt(n);
	while(ok){
		if(ck1(n)) print(n);
		check(n);
	}
	return 0;
}
