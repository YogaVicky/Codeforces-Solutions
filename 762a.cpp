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
	string s;
	cin>>s;
	n = s.length();
	if(n%2==1){
		cout<<"NO"<<endl;
		return;
		}
	string temp="";
	for(i=0;i<n/2;i++){
		if(s[i]!=s[i+n/2]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}