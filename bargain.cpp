#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
// #define mod 1000000007
#define mp make_pair
ll mod = 1000000007;
void solve(){
	ll i;
	string s;
	cin>>s;
	vector<ll>n;
	for(i=0;s[i]!='\0';i++)
		n.pb(s[i]-'0');
	ll a,count=0;
	ll l = n.size(),num=0;
	// cout<<l<<endl;
	ll m = l;
	ll sum =0;
	while(m--){
		ll s1=0,s2=0;
		// s1
		ll a = n[m];
		ll d = l-count-1;
		s1=s1 + (a*pow(10,l-(l-count))*((d*(d+1))/2));
		s1%=mod;
		num=num + (count*pow(10,count-1));
		// cout<<num<<endl;
		s2+=(a*num)%mod;
		count++;
		sum+=s1;
		sum+=s2;
		sum%=mod;
		// cout<<a<<" "<<s1<<" "<<s2<<endl;
	}
	cout<<sum<<endl;
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}