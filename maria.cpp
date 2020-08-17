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
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll check = 1;
	ll count = 1;
	ll pos = 0;
	for(i=0;i<n;i++){
		if(a[i]<=i+1)
			pos = i+1;
	}
	cout<<pos+1<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10;i++);
	while(t--){
		solve();
	}
	return 0;
}