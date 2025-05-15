#include<bits/stdc++.h>
using namespace std;


int ok;

void sinh(char a[], int n, int k){
	int i=k-1;
	while(i>=0&&a[i]==n-k+'A'+i) i--;
	if(i==-1) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<k;j++)
		a[j]=a[j-1]+1;
	}
}

void ktao(char a[], int k){
	for(int i=0;i<k;i++) a[i]='A'+i;
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,k;
		cin>>n>>k;
		char a[k];
		ktao(a,k);
		ok=1;
		while(ok){
			for(int i=0;i<k;i++)
			cout<<a[i];
			cout<<endl;
			sinh(a,n,k);
		}
		
	}
}
