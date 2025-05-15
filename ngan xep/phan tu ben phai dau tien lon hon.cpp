#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stack<int> x;
		memset(b,-1,sizeof(b));
		for(int i=0;i<n;i++){
			while(!x.empty()&&a[i]>a[x.top()]){
				b[x.top()]=a[i];
				x.pop();
			}
			x.push(i);
		}
		for(int i:b) cout<<i<<" ";
		cout<<endl;
	}
}
