#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int cnt=1;
		bool ok=false;
		while(n--){
			int tmp;
			cin>>tmp;
			if(ok==false){
				if(tmp==k)
				ok=true;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
