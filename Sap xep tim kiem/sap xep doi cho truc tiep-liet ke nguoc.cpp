#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<vector<int>> x;
		for(int &i:a) cin>>i;
		bool ok=false;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]){
					swap(a[j],a[i]);
					ok=true;
				}
			}
			if(ok) x.push_back(a);
		}
		int cnt=x.size();
		for(int i=x.size()-1;i>=0;i--){
			cout<<"Buoc "<<cnt<<": ";
			for(int j=0;j<n;j++) cout<<x[i][j]<<" ";
			cnt--;
			cout<<endl;
		}
	}
}
