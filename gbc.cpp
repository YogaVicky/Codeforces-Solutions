#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ll ap(vector<ll>a){
	ll n = a.size();
	ll check=0;
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        check=0;
        map<double,ll>mp;
        for(ll j=i+1;j<n;j++){
            double k=((a[j]-a[i])*1.0)/(i-j);
            mp[k]++;
            check=max(check,mp[k]);
        }
        ans=max(ans,check);
    }
    return ans;
}

void template_test(){
    ll n,i,j,k,m;
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
}

void solve(){
	ll n,i,j,k,m,x;
	ll check=0,check1=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	template_test();
	template_test();
	ll ans=0;
    ans = ap(a);
    ans++;
    check=n-ans;
    cout<<check<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}