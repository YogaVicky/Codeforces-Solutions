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
	cin>>n>>m;
	vector<ll>ans;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			ll a = abs(i-0)+abs(j-0);
			ll b = abs(i-0)+abs(j-(m-1));
			ll c = abs(i-(n-1))+abs(j-0);
			ll d = abs(i-(n-1))+abs(j-(m-1));
			// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
			temp = max(d,max(c,max(a,b)));
			// cout<<temp<<" ";
			ans.pb(temp);
		}
	}
	// cout<<endl;
	sort(ans.begin(),ans.end());
	sort(ans.begin(),ans.end());
	for(i=0;i<n*m;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}