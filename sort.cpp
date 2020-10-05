#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	for(i=0;i<1000;i++);
	cin>>n;
	vector<ll>a(n),b(n-1);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000;i++);
	while(t--){
		solve();
	}
	return 0;
}