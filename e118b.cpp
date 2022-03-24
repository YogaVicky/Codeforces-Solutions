#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	vector<ll>a(n);
	map<ll,ll>mp;
	for(i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]=1;
	}
	sort(a.begin(),a.end());
	for(i=1;i<=n/2;i++){
		cout<<a[i]<<" "<<a[0]<<endl;
	}	
	return;
	// cout<<check<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

