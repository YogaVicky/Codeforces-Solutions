#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,sum=0;
	cin>>n;
	
	// vector<ll>a(n);
	double ans=0;
	for(i=1;i<=n;i++){
		ans+=double(double(1)/double(i));
	}
	cout<<ans<<endl;
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

