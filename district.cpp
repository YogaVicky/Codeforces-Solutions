#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll check=0;
	ll in = a[0];
	for(i=1;i<n;i++){
		if(a[i]!=a[0]){
			check=1;
		}
	}
	if(check==0)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		ll pt;
		for(i=1;i<n;i++){
			if(a[0]!=a[i])
				pt = i;
		}
		for(i=1;i<n;i++){
			if(a[i]!=a[0])
				cout<<1<<" "<<i+1<<endl;
			else
				cout<<pt+1<<" "<<i+1<<endl;
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);

		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}