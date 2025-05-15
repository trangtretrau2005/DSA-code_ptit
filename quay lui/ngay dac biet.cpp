#include<bits/stdc++.h>
using namespace std;

string ngay[]={"02","20","22"};
string nam[]={"2000","2002","2020","2022","2200","2202","2220","2222"};
string x[100];


void Try(int i){
	if(i==2){
		cout<<x[0]<<"/"<<"02/"<<x[1]<<endl;
		return;
	}
	if(i==0){
		for(int j=0;j<3;j++){
			x[i]=ngay[j];
			Try(i+1);
		}
	}
	else{
		for(int j=0;j<8;j++){
			x[i]=nam[j];
			Try(i+1);
		}
	}
}

int main(){
	Try(0);
}
