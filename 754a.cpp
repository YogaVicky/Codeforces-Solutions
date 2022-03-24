#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	vector<ll>a(3);
	cin>>a[0]>>a[1]>>a[2];
	sort(a.begin(),a.end());
	if(a[0]+a[2] == 2*a[1] || abs(a[0]+a[2]-2*a[1])%3==0)
		cout<<0<<endl;
	else
		cout<<1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
