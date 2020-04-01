#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll n = s.length(),i;
		vector<ll>a;
		a.pb(0);
		for(i=0;i<n;i++){
			if(s[i]=='R')
				a.pb(i+1);
		}
		a.pb(n+1);
		ll ans = 0;
		for(auto it=a.begin()+1;it!=a.end();it++){
			ans = max(ans,*it - *(it-1));
		}
		cout<<ans<<endl;
	}
	return 0;
}