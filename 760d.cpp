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
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll de = n-1,nu=n-k-1;
	ll sum=0;
	while(k--){
		if(sum+=a[nu]/a[de]);
		de--;
		nu--;
	}
	for(i=0;i<=nu;i++)
		sum+=a[i];
	cout<<sum<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}