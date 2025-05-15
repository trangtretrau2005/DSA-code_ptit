#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<vector<int>> x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(a[min],a[i]);
		x.push_back(a);
	}
	int cnt=x.size();
	for(int i=x.size()-1;i>=0;i--){
		cout<<"Buoc "<<cnt<<": ";
		for(int j=0;j<x[i].size();j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
		cnt--;
	}
}
