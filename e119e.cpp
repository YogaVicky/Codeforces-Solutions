#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n;
	map<ll,ll>m;
	ll l = 5*100001;
	for(i=1;i<l;i++){
		m[i]=i;
	}
	vector<ll>x(l);
	vector<pair<ll,ll>>y(l);
	vector<ll>ans;
	ll t = n;
	ll a,b,c;
	for(i=0;i<t;i++){
		cin>>a>>b;
		if(a==2){
			cin>>c;
			x[i]=0;
			y[i]=make_pair(b,c);
		}
		else{
			x[i]=b;
			y[i]=make_pair(0,0);
		}
	}
	t = n;
	for(i=t-1;i>=0;i--){
		if(x[i]!=0){
			ans.pb(m[x[i]]);
		}
		else{
			pair<ll,ll>p=y[i];
			m[p.first]=m[p.second];
		}
	}
	reverse(ans.begin(),ans.end());
	// cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;	
}
int main(){
	ll t=1,i;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}