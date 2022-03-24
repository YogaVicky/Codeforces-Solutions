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
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	ll l=0;
	ll r=n-1;
	ll check=0;
	while(l<r){
		if(a[l]!=a[r]){
			check=1;
			break;
		}
		else{
			l++;
			r--;
		}
	}
	if(!check){
		cout<<"YES"<<endl;
	}
	else{
		check=0;
		vector<ll>b;
		for(i=0;i<n;i++){
			if(a[i]!=a[l])
				b.pb(a[i]);
		}
		m=b.size();
		ll l1=0,r1=m-1;
		while(l1<r1){
			if(b[l1]!=b[r1]){
				check=1;
				break;
			}
			else{
				l1++;
				r1--;
			}
		}
		if(!check){
			cout<<"YES"<<endl;
			return;
		}
		check=0;
		vector<ll>c;
		for(i=0;i<n;i++){
			if(a[i]!=a[r])
				c.pb(a[i]);
		}
		m=c.size();
		l1=0,r1=m-1;
		while(l1<r1){
			if(c[l1]!=c[r1]){
				check=1;
				break;
			}
			else{
				l1++;
				r1--;
			}
		}
		if(!check){
			cout<<"YES"<<endl;
			return;
		}
		cout<<"NO"<<endl;	
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

