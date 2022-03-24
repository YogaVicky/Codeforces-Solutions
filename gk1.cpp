#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(ll c){
	ll n,i,j,k,m;
	string s;
	cin>>n;
	cin>>s;
	n = s.length();
	vector<ll>a(n);
	vector<ll>b(n);
	j=LONG_MAX;
	for(i=0;i<n;i++){
		if(s[i]=='1'){
			j=i;
			a[i]=0;
		}
		else{
			a[i]=abs(j-i);
		}
	}
	j=LONG_MAX;
	for(i=n-1;i>=0;i--){
		if(s[i]=='1'){
			j=i;
			b[i]=0;
		}
		else{
			b[i]=abs(j-i);
		}
	}
	ll ans=0;
	for(i=0;i<n;i++){
		ans+=min(a[i],b[i]);
	}
	cout<<"Case #"<<c<<": "<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	ll c=1;
	while(t--){
		solve(c);
		c++;
	}
	return 0;
}
