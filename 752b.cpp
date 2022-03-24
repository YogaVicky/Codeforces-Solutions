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
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n%2==0)
		cout<<"YES"<<endl;
	else{
		ll check=0;
		for(i=0;i<n-1;i++){
			if(a[i]>=a[i+1]){
				check=1;
				break;
			}
		}
		if(check)
			cout<<"YES"<<endl;	
		else
			cout<<"NO"<<endl;
	}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
	while(t--){
		solve();
	}
	return 0;
}
