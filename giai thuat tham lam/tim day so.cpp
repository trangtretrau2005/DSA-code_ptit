#include<bits/stdc++.h>
using namespace std;


int a[1001];
int b[1001];
int n;

int check(){
	int t=0;
	for(int i=0;i<n-1;i++){
		if(a[i]/b[i]!=a[i+1]/b[i+1]) 
		{
			t=1;
		while((a[i]/b[i]!=a[i+1]/b[i+1])){
			if(a[i]/b[i]<a[i+1]/b[i+1]) b[i+1]++;
			else b[i]++;
		}	
	}
	}
	return t;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	fill(b, b + n, 1);
	while(check()!=0); 
	long long sum1=0;
	for(int i=0;i<n;i++) {
		sum1+=b[i];
	}
	cout<<sum1<<endl;
}
