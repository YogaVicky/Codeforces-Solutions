#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
 
void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0;
	cin>>n;
	vector<ll>a(n),b,c;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			b.pb(a[i]);
		else
			c.pb(a[i]);
	}
	sort(a.begin(),a.end());
	// cout<<b.size()<<endl;
	sort(a.begin(),a.end());
	sort(a.begin(),a.end());
	sort(a.begin(),a.end());
	if(b.size()>=2){
		for(i=0;i<b.size()-1;i++){
		if(b[i]>b[i+1]){
			cout<<"NO"<<endl;
			check=1;
			return;
		}
	}
	}
	sort(a.begin(),a.end());
	sort(a.begin(),a.end());
	sort(a.begin(),a.end());
	// cout<<c.size()<<endl;
	if(c.size()>=2){
		for(i=0;i<c.size()-1;i++){
		if(c[i]>c[i+1]){
			cout<<"NO"<<endl;
			check=1;
			return;
		}
	}
	}
	cout<<"YES"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}