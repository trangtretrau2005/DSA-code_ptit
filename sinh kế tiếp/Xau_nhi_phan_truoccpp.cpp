#include<bits/stdc++.h>
using namespace std;

void sinh(string &n){
	int i=n.length()-1;
		while(i>=0&&n[i]=='0') i--;
		if(i==-1) {
			for(int t=0;t<=n.length()-1;t++) n[t]='1';
		
		}
		else{
			n[i]='0';
			for(int j=i+1;j<=n.length()-1;j++){
				n[j]='1';
			}
			

		}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		string n;
		cin>>n;
		getchar();
		sinh(n);
		for(int i=0;i<=n.length()-1;i++) cout<<n[i];
		cout<<endl;
	}
}
