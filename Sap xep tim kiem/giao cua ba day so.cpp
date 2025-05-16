#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int test;
	cin>>test;
	while(test--){
		ll ok=1;
		ll a,b,c;
		cin>>a>>b>>c;
		ll a1[a];
		ll b1[b];
		ll c1[c];
		for(ll &i:a1) cin>>i;
		for(ll &i:b1) cin>>i;
		for(ll &i:c1) cin>>i;
		ll x=0,y=0,z=0;
		vector<ll> v;
		while(x<a&&y<b&&z<c){
			if(a1[x]==b1[y]&&b1[y]==c1[z]){
				if(v.empty()||v.back()!=a1[x]){
					v.push_back(a1[x]);
				}
				x++;y++;z++;
			}
			else{
				ll min1 = min(min(a1[x],b1[y]),c1[z]);
					if(min1==a1[x]) x++;
					else if(min1==b1[y]) y++;
					else z++;
				}
		}
		if(v.empty()) cout<<-1<<endl;
		else
		for(ll i:v) cout<<i<<" ";
		cout<<endl;
	}
}
