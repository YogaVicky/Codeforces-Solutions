#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	cin>>n>>m;
	string s;
	cin>>s;
	while(m--){
		ll a,b;
		cin>>a>>b;
		ll check = 0;
		for(i=a-2;i>=0;i--){
			if(s[i]==s[a-1]){
				cout<<"YES"<<endl;
				check=1;
				break;
			}
		}
		if(check==1)
			continue;
		for(i=b;i<n;i++){
			if(s[i]==s[b-1]){
				cout<<"YES"<<endl;
				check=1;
				break;
			}
		}
		if(check==1)
			continue;
		cout<<"NO"<<endl;
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