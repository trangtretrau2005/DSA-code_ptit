#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if((m==0&&n>1)||n*9<m) cout<<-1<<" "<<-1;
	else if(m==0&&m==1) cout<<0<<" "<<0;
	else{
		int b[n]={};
		b[0]=1;
		int i=n-1;
		int tmp=m;
		m--;
		while(m>=9){
			b[i]=9;
			i--;
			m-=9;
		}
		b[i]+=m;
		i=n-1;
		int c[n];
		fill(c,c+n,9);
		tmp =9*n-tmp;
		while(tmp>9){
			tmp-=9;
			c[i]=0;
			i--;
		}
		c[i]-=tmp;
		for(int j:b) cout<<j;
		cout<<" ";
		for(int j:c) cout<<j;
		cout<<endl;
	}
}
