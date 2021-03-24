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
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	vector<ll>b(m);
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	ll s1=0,m1=0,s2=0,m2=0;
	for(i=0;i<n;i++){
		s1+=a[i];
		m1=max(s1,m1);
	}
	for(i=0;i<m;i++){
		s2+=b[i];
		m2=max(s2,m2);
	}
	cout<<m1+m2<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}