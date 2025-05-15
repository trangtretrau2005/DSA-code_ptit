#include<bits/stdc++.h>
using namespace std;

string a[100];
string res[100];

void print(int index){
	for(int i=0;i<index;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}
void Try(int index,int pos, int n, int k){
	if(index==k){
		print(index);
		return;
	}
	for(int i=pos; i<n;i++){
		res[index]=a[i];
		Try(index+1,i+1,n,k);
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a + n);
	n = unique(a, a + n) - a;
	Try(0,0,n,k);	
}
