#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	int a[51][51]={};
	for(int i=1;i<=n;i++){
		string s,c;
		getline(cin, s);
		stringstream ss(s);
		while(ss>>c){
			a[i][stoi(c)]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=0&&i<j){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
