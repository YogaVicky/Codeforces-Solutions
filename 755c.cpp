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
	cin>>n;
	ll check=1;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(i=0;i<n;i++){
		if(b[i]-a[i]!=0 && b[i]-a[i]!=1){
			// cout<<b[i]<<" "<<a[i]<<endl;
			check=0;
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}