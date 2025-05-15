#include<bits/stdc++.h>
using namespace std;

struct gtri{
	int a;
	int b;
};

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		gtri a[n];
		for(int i=0;i<n;i++) cin>>a[i].a;
		for(int i=0;i<n;i++) cin>>a[i].b;
		sort(a,a+n,[](gtri x, gtri y){
    		return x.b<y.b;
		});
		int t=1;
		int tmp=a[0].b;
		for(int i=1;i<n;i++){
			if(a[i].a>=tmp){
				t++;
				tmp=a[i].b;
			}
		}
		cout<<t<<endl;
	}
}
