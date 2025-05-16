#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	vector<int> c,l;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i%2==0) c.push_back(i);
		else l.push_back(i);
	}
	int c1=c.size();
	int l2=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout<<c[c1-1]<<" ";
			c1--;
		}
		else{
			cout<<l[l2]<<" ";
			l2++;
		}
	}
}
