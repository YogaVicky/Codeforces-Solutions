#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	string s;
	cin>>n>>k;
	cin>>s;
	string ans[k] = {"\0"};
	ll l = 0,r = s.length()-1;
	char a,b;
	while(l<=r){
		if(a!=s[l] && b!=s[r]){
			l++;
		}

		a = s[l];
		b = s[b];
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}