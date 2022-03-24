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
	m=0,x=INT_MAX;
	for(i=0;i<n;i++){
		cin>>a[i];
		m=max(m,a[i]);
		x=min(x,a[i]);
	}
	cout<<m-x<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}