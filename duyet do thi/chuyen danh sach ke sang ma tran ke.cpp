#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	int a[n+1][n+1]={};
	for(int i=1;i<=n;i++){
		string s,c;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>c){
			a[i][stoi(c)]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
