#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());


ll res(ll a,ll b){
	if(a==b)
		return 0;
	else if(a==b+1)
		return 0;
	else{
		ll d = a-b;
		// ll f = a%d;
		// if(f==0)
		// 	return f;
		// return d - f;
		ll f = d;
		while(1){
			if(f>a)
				return f-a;
			else
				f+=d;
		}
	}
}

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	if(n>m){
		n=n+m;
		m=n-m;
		n=n-m;
	}
	ll d = abs(m-n);
	cout<<m-n<<" "<<res(m,n)<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
