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
	string s,t;
	cin>>s>>t;
	ll l=s.length();
	ll g=t.length();
	ll check=1;
	i=l-1;
	for(j=g-1;j>=0;j--){
		if(t[j]==s[i])
			i--;
		else{
			while(t[j]!=s[i] && i>=0){
				i-=2;
			}
			if(i<0){
				check=0;
				break;
			}
			i--;
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
