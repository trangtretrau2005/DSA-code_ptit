#include<bits/stdc++.h>
using namespace std;

int ok;


int C(int n, int k) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(n - 1, k - 1) + C(n - 1, k);
}

void sinh(int a[], int n, int k){
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,k;
		cin>>n>>k;
		int a[k+1];
		for(int i=1;i<=k;i++){
//			a[i]=i;
			cin>>a[i];
		}
		int cnt=0;
		ok=1;
		while(ok){
			sinh(a,n,k);
			cnt++;
		}
		cout<<C(n,k)-cnt+1<<endl;
	}
}
