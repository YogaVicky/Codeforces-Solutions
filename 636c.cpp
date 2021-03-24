#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll s = 0;
	ll mx=0,mn=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			mn=0;
			if(a[i]>mx){
				s-=mx;
				mx = a[i];
				s+=mx;
			}
		}
		else{
			mx=0;
			if(a[i]<mn){
				s-=mn;
				mn = a[i];
				s+=mn;
			}
		}
		cout<<s<<endl;
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