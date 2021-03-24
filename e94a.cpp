#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	string s;
	// vector<ll>a(n);
	cin>>s;
	for(i=0;i<s.size();i++){
		if(i%2==0)
			cout<<s[i];
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}