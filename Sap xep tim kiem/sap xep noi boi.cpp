#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i:a) cin>>i;
	int cnt=1;
	bool ok=false;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=true;
			}
		}
		if(ok){
			cout<<"Buoc "<<cnt<<": ";
			for(int t:a) cout<<t<<" ";
			cnt++;
			ok=false;
			cout<<endl;
		}
		
	}
}
