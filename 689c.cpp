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
	cin>>n>>m;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll iff2=1;
	for(i=1;i<n;i++){
		if(a[i]!=i+1){
			iff2=i+1;
			// cout<<iff2<<endl;
		}
	}
	ll x;
	long double y;
	vector<pair<ll,long double>>b;
	for(i=0;i<m;i++){
		cin>>x>>y;
		pair<ll,long double>p=make_pair(x,y);
		// cout<<p.first<<" "<<p.second;
		b.pb(p);

	}
	long double count=0;
	if(iff2==1){
		cout<<1<<endl;
	}
	else{
		for (auto& it : b){
			if(it.first>=iff2){
				long double add = (1-count)*it.second;
				count+=add;
			}
		}
		cout<<count<<endl;	
	}

}
int main(){
	ll t;
	cin>>t;
	ll i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}