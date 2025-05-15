#include<bits/stdc++.h>
using namespace std;

int n;
int cnt=0;
bool cot[100],c1[100],c2[100];
int res[100];

void Try(int index){
	if(index==n+1){
		cnt++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!cot[i]&&!c1[index-i+n]&&!c2[index+i-1]){
			cot[i]=c1[index-i+n]=c2[index+i-1]=true;
			res[index]=i;
			Try(index+1);
			cot[i]=c1[index-i+n]=c2[index+i-1]=false;
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		cin>>n;
		cnt=0;
		Try(1);
		cout<<cnt<<endl;
	}
}
