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
	cin>>n;
	ll ans=1,s=1,c=1;
	while(ans<n){
		c+=2;
		ans+=c;
		s++;
	}
	cout<<s<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}
