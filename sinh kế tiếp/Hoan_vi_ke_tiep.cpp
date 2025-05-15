#include<bits/stdc++.h>
using namespace std;



void index(int a[], int n){
	int i=n-2,j=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	while(a[i]>a[j]){
		j--;
	}
	int tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
//	for(int t=0;t<=i;t++){
//		cout<<a[t]<<" ";
//	}
//	cout<<a[j]<<j<<i;
	reverse(a+i,a+n);
//	for(int h=n-1;h>i;h--){
//		cout<<a[h]<<" ";
//	}
	for(int t=0;t<n;t++){
		cout<<a[t]<<" ";
	}
}

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		index(a,n);
		cout<<endl;
	}
}
