#include<bits/stdc++.h>
using namespace std;

int a[100001],b[100005];
int n,m;

int count(int x, int y){
	int *t1=lower_bound(b,b+m,x);
	int *t2=upper_bound(b,b+m,y);
	return t2-t1;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		sort(b,b+m);
		int cnt=0;
		for(int i=0;i<n;i++){
			if(a[i]==0) continue;
			if(a[i]==1) cnt+=count(0,0);
			else if(a[i]==2)
			cnt+=m-count(2,4);
			else if(a[i]==3) cnt+=m-count(3,3);
			else  cnt+=m-count(2,a[i]);
		}
		cout<<cnt<<endl;
	}
}
