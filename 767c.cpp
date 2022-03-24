#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	set<ll>s;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		s.insert(i);
	}
	s.insert(i);
	vector<ll>sf(n);
	for(i=n-1;i>=0;i--){
		s.erase(a[i]);
		sf[i]=*s.begin();
	}
	for(i=0;i<n;i++)
		cout<<sf[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++){
		s.insert(i);
	}
	s.insert(i);
	s.erase(a[0]);
	// cout<<*s.begin()<<" ";
	for(i=1;i<n;i++){
		cout<<*s.begin()<<" ";
		if(*s.begin()==sf[i-1])
			cout<<sf[i-1]<<" ";
		s.erase(a[i]);
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