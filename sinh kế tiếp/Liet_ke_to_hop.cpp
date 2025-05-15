#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1000];
bool used[1001]={false};
int perm[1000];

void print(int n2){
	for(int i=0;i<n2;i++) cout<<perm[i]<<" ";
	cout<<endl;
}

void Try(int i, int n2){
	if(i==k){
		print(k);
		return;
	}
	for(int j= 0;j<n2;j++){
		if(!used[a[j]]){
			used[a[j]]=true;
			perm[i]=a[j];
			Try(i+1,n2);
			used[a[j]]=false;
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	sort(a,a+n);
	int n2= unique(a,a+n)-a;
	Try(0,n2);
	
}
