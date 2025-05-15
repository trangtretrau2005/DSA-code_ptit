#include<bits/stdc++.h>
using namespace std;

string a[100];
int n,k;
bool used[100]={false};
string perm[100];

void print(){
	for(int i=0;i<k;i++){
		cout<<perm[i]<<" ";
	}
	cout<<endl;
}

void Try(int i, int bd){
	for(int j=bd;j<n;j++){
		perm[i]=a[j];
			if(i==k-1) print();
			else
			Try(i+1,j+1);
		}
	}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	n=unique(a,a+n)-a;
	Try(0,0);
}
