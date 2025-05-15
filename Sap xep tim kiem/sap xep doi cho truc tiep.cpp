#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	bool ok=false;
	int cnt=1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				ok=true;
				swap(a[i],a[j]);
			}
			
		}
		if(ok==true){
			cout<<"Buoc "<<cnt<<": ";
			for( int t=0;t<n;t++)
			cout<<a[t]<<" ";
			ok=false;
			cout<<endl;
			cnt++;
		}
	}
}
