#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll i;
	string s;
	cin>>s;
	ll n = s.length();
	ll ans = 0, f0 = 0, f1 = 0, cnt = 0, g0 = 0, g1 = 0;
	for(i=0;i<n;i++) {
		if(s[i] == '(') {
			f0++;
		}
		else if(s[i] == ')') {
			if(f0) cnt++, f0--;
		}
		else if(s[i] == '[') {
			g0++;
		}
		else {
			if(g0) cnt++, g0--;
		}
	}
	ans = cnt;
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}