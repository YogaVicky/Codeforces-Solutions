#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll h,m;
		cin>>h>>m;
		if(h==0 && m==0){
			cout<<0<<endl;
			continue;
		}
		// cout<<h<<m<<endl;
		ll ans = (24-h)*60 - m;
		cout<<ans<<endl;
	}
	return 0;
}