#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) {
			cin>>a[i];
		}
		a[0]=-1;
		a[n+1]=0;
		int kq=0;
		stack<int> s;
		s.push(0);
		for(int i=1;i<=n+1;i++){
			if(a[i]>a[s.top()]) s.push(i);
			else{
				while(1){
					int x =s.top();
					s.pop();
					if(i-1-s.top()>=a[x]) kq=max(kq,a[x]);
					if(a[s.top()]<a[i]) break;
				}
				s.push(i);
			}
		}
		cout<<kq<<endl;	
	}
}
