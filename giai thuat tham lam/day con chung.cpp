#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int cnt=0;
		int x,y,z;
		cin>>x>>y>>z;
		int a[x],b[y],c[z];
		for(int i=0;i<x;i++) cin>>a[i];
		for(int i=0;i<y;i++) cin>>b[i];
		for(int i=0;i<z;i++) cin>>c[i];
		for(int i=0;i<x;i++){
				if(b[lower_bound(b,b+y,a[i])-b]==a[i]&&c[lower_bound(c,c+z,a[i])-c]==a[i]){
					cout<<a[i]<<" ";
					b[lower_bound(b,b+y,a[i])-b]=-10;
					c[lower_bound(c,c+z,a[i])-c]=-10;
					cnt++;
				}
		}		
		if(cnt==0) cout<<"NO";
		cout<<endl;
	}
}
