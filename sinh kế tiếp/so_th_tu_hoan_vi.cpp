#include<bits/stdc++.h>
using namespace std;


int ok;
void sinh(int b[], int n){
	int i=n-1;
	while(i>=1&&b[i]<b[i+1]) i--;
	if(i==0) ok=0;
	else{
		int j=n;
		while(j>=1&&b[j]>b[i]) j--;
		swap(b[i], b[j]);
		reverse(b+i+1,b+n+1);
	}
	
}

void ktao(int b[], int x){
	for(int i=1;i<=x;i++) b[i]=i;
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int b[n+1];
		for(int i=1;i<=n;i++) cin>>b[i];
		ok=1;
		int cnt=0;
		while(ok){
			cnt++;
			sinh(b,n);
			
		}
		cout<<endl;
		cout<<cnt;
	}
}
