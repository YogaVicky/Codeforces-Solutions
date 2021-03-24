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
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a.begin(),a.end());
	ll a2=a[n/2];
	ll a1=a[n/2 - 1];
	for(i=0;i<n;i++){
		if(b[i]<a1 && b[i]<a2){
			cout<<a2<<endl;
			continue;
		}
		if(b[i]>a1 && b[i]>a2){
			cout<<a1<<endl;
			continue;	
		}
		if(b[i]==a1){
			cout<<a2<<endl;
			continue;	
		}
		if(b[i]==a2){
			cout<<a1<<endl;
			continue;	
		}
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}