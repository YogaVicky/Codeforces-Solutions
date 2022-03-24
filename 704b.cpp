#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	vector<ll>b;
	temp=n;
	vector<ll>t;
	set<ll>s;
	for(i=1;i<=n;i++)
		s.insert(i);
	for(i=n-1;i>=0;i--){
		auto it=s.end();
		it--;
		// cout<<temp<<" "<<a[i]<<endl;
		if(a[i]==*it || i==0){
			t.pb(a[i]);
			for(j=t.size()-1;j>=0;j--){
				// cout<<t[j]<<endl;
				b.pb(t[j]);
			}
			t.clear();
			s.erase(a[i]);
		}
		else{
			t.pb(a[i]);
			s.erase(a[i]);
		}
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}