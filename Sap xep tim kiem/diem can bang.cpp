#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		long long sum=0;
		long long s=0;
		for(int &i:a) {
			cin>>i;
			sum+=i;
		}
		int ok=0;
		for(int i=1;i<n;i++){
			s+=a[i-1];
			long long sum1=sum-s-a[i];
			if(sum1==s){
				cout<<i+1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<-1<<endl;
	}
}
