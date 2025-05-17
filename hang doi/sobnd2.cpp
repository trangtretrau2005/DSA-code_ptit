#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;cin>>n;
		queue<string> q;
		q.push("1");
		long long kq;
		bool check=true;
		while(check){
			long long tmp= stoll(q.front());
			if(tmp>n&&tmp%n==0){
				check=false;
				kq=tmp;
			}
			else{
				string s=q.front();
				q.pop();
				q.push(s+"0");
				q.push(s+"1");
			}
		}
		cout<<kq<<endl;
	}
}
