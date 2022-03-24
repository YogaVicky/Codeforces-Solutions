#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	string s;
	cin>>s;
	ll a[26]={0};
	a[s[0]-'A']++;
	for(i=1;i<s.length();i++){
		if(s[i]==s[i-1])
			continue;
		else if(a[s[i]-'A']>0){
			cout<<"NO"<<endl;
			return;
		}
		else{
			a[s[i]-'A']++;
		}
	}
	cout<<"YES"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}