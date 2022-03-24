#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	ll a,b;
	string s;
	cin>>n>>a>>b;
	cin>>s;
	ll ans=0;
	if(b>=0){
		ans=s.length()*(a+b);
		cout<<ans<<endl;
		return;
	}
	ans+=s.length()*a;
	ll c1=0,c2=0;
	ll check=0;
	for(i=0;i<n;i++){
		if(s[i]=='1' && check==0){
			c1++;
			check=1;
		}
		if(s[i]=='0' && check==1){
			check=0;
		}
	}
	check=0;
	for(i=0;i<n;i++){
		if(s[i]=='0' && check==0){
			c2++;
			check=1;
		}
		if(s[i]=='1' && check==1){
			check=0;
		}
	}
	if(c1>c2)
		ans+=b*(c2+1);
	else
		ans+=b*(c1+1);
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
