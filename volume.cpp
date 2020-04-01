#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,m;
		cin>>n>>m;
		ll d = abs(m - n);
		ll ans = d/5;
		d%=5;
		if(d==1||d==2)
			ans++;
		else if(d==3||d==4)
			ans=ans+2;
		cout<<ans<<endl;
	}
	return 0;
}