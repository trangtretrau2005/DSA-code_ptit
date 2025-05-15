#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		string c;
		stringstream ss(s);
		string a[10000];
		int t=0;
		while(ss>>c){
			a[t]=c;
			t++;
		}
		for(int i=t-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
