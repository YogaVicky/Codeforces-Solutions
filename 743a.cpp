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
	string s;
	cin>>n;
	cin>>s;
	n = s.length();
	ll ans=0;
	for(i=n-2;i>=0;i--){
		if(s[i]!='0'){
			ans++;
			ans+=s[i]-'0';
		}
	}
	ans+=s[n-1]-'0';
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<19000;i++);
		for(i=0;i<19000;i++);
			for(i=0;i<19000;i++);
				
	while(t--){
		solve();
	}
	return 0;
}
