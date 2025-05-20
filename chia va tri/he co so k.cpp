#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long k;
		string x,y;
		cin>>k>>x>>y;
		int x1=x.size()-1;
		int y1=y.size()-1;
		int nho=0;
		string res;
		while(x1>=0&&y1>=0){
			int sum =(x[x1]-'0')+(y[y1]-'0')+nho;
			nho=sum/k;
			res = to_string(sum%k)+res;
			x1--;
			y1--;
		}
		while(x1>=0){
			int sum =(x[x1]-'0')+nho;
			nho=sum/k;
			res = to_string(sum%k)+res;
			x1--;
		}
		while(y1>=0){
			int sum =(y[y1]-'0')+nho;
			nho=sum/k;
			res = to_string(sum%k)+res;
			y1--;
		}
		if(nho) res=to_string(nho)+res;
		cout<<res<<endl;
	}
}
