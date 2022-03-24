#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(ll t){
	ll n,i,j,k,m;
	cin>>n;
	ll a,b,c,d;
	vector<pair<ll,ll>>x,y;
	ll m1=INT_MAX,m2=INT_MIN,m3=INT_MAX,m4=INT_MIN;
	for(i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		m1=min(m1,a);
		m2=max(m2,c);
		m3=min(m3,b);
		m4=max(m2,d);
		x.pb(make_pair(a,c));
		y.pb(make_pair(b,d));
	}
	ll p1,p2;
	ll a1=INT_MAX,a2=INT_MAX;
	for(i=m1;i<=m2;i++){
		ll s=0;
		for(j=0;j<x.size();j++){
			if(i<=x[j].second && i>=x[j].first)
				s+=0;
			else if(i<=x[j].second)
				s+=x[j].first-i;
			else
				s+=i-x[j].second;

		}
		if(a1>s){
			p1=i;
			a1=s;
		}
	}
	for(i=m3;i<=m4;i++){
		ll s=0;
		for(j=0;j<y.size();j++){
			if(i<=y[j].second && i>=y[j].first)
				s+=0;
			else if(i<=y[j].second)
				s+=y[j].first-i;
			else
				s+=i-y[j].second;
		}
		if(a2>s){
			p2=i;
			a2=s;
		}
	}
	cout<<"Case #"<<t<<": "<<p1<<" "<<p2<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll k=1;
	while(t--){
		solve(k);
		k++;
	}
	return 0;
}
