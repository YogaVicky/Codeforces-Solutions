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
	ll a[n]={0};
	ll count=0;
	for(i=1;i<n;i++){
		if(s[i]==s[i-1] && a[i-1]!=1){
			a[i]=1;
		}
		if(s[i]==s[i-2] && a[i-2]!=1 && i!=1){
			a[i]=1;	
		}
	}
	for(i=0;i<n;i++){
		if(a[i])
			count++;
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}