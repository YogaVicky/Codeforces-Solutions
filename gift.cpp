#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	ll m1=a[0],m2=b[0];
	for(i=0;i<n;i++){
		if(a[i]<m1)
			m1=a[i];
	}
	for(i=0;i<n;i++)
		if(b[i]<m2)
			m2=b[i];
	ll s = 0;
	for(i=0;i<n;i++){
		s+=max(a[i]-m1,b[i]-m2);
	}
	cout<<s<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}