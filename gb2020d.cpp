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
	vector<ll>a(n);
	map<ll,ll>m,p;
	ll sum=0;
	vector<ll>s;
	for(i=1;i<=n;i++){
		cin>>a[i];
		m[i]=a[i];
		sum+=a[i];
	}
	ll x,y;
	for(i=1;i<=n-1;i++){
		cin>>x>>y;
		if(p.find(x)==p.end())
			p[x]=1;
		else{
			// cout<<x<<endl;
			s.pb(m[x]);
			// p[x]++;
		}
		if(p.find(y)==p.end())
			p[y]=1;
		else{
			// cout<<y<<endl;
			s.pb(m[y]);
			// p[y]++;
		}
	}
	// for(i=1;i<n;i++)
	// 	cout<<s[i-1]<<" ";
	// cout<<endl;	
	sort(s.begin(),s.end(),greater<ll>());
	for(i=1;i<n;i++)
		s.pb(0);
	for(i=1;i<n;i++){
		cout<<sum<<" ";
		sum+=s[i-1];
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}