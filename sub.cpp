#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	string s;
	cin>>s;
	ll count = 0;
	n = s.length();
	ll c1=0,c2=0;
	for(i=1;i<n-1;i++){
		if(s[i]=='0')
			c1++;
		else
			c2++;
	}
	if(s[0]==s[n-1]){
		if(s[0]=='0')
			c1++;
		else
			c2++;
	}
	cout<<min(c1,c2)<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}