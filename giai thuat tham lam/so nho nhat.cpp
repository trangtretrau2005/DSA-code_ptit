#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		if(m*9<n) cout<<-1<<endl;
		else{
			int a[m]={};
			a[0]=1;
			n--;
			int i=m-1;
			while(n>=9){
				a[i]=9;
				i--;
				n-=9;
			}
			a[i]+=n;
			for(int i:a) cout<<i;
			cout<<endl;
		}
	}
}
