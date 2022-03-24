#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x;
	ll check=0,check1=0;
	cin>>n>>m;
	vector<string>v1(n),v2(m);
	// vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>v1[i];
	for(i=0;i<m;i++)
		cin>>v2[i];
	ll t;
	cin>>t;
	while(t--){
		cin>>k;
		string ans = "";
		if(k%n==0)
			ans+=v1[n-1];
		else
			ans+=v1[k%n-1];
		if(k%m==0)
			ans+=v2[m-1];
		else	
			ans+=v2[k%m-1];
		cout<<ans<<endl;
	}
}
int main(){
	ll t,i;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}