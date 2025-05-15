#include <bits/stdc++.h>
using namespace std;

int a[20];
int n;

void print(){
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}

bool check(){
	for(int i=0;i<n-1;i++){
		if(a[i]==8&&a[i+1]==8) return false;
	}
	for(int i=0;i<n-3;i++)
	if(a[i]==6&&a[i+1]==6&&a[i+2]==6&&a[i+3]==6) return false;
	return true;
}

void Try(int i){
	if(i==n-1){
		if(check()) print();
		return; 
	}
	a[i]=6;
	Try(i+1);
	a[i]=8;
	Try(i+1);
}
int main(){
	cin>>n;
	a[0]=8;
	a[n-1]=6;
	Try(1);
}
