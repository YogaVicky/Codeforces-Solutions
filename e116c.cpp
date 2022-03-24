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
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll ans=0;
	ll sum=0;
	ll t=k;
	for(i=0;i<n-1;i++){
		if(t>9){
			t-=9;
			sum+=9*pow(10,a[i]);
		}
		else{
			sum+=(t+1)*pow(10,a[i]);
			cout<<sum<<endl;
			return;
		}
	}
	cout<<sum<<endl;
	ll r = a[n-1]-a[n-2];
	cout<<sum+t*pow(10,a[n-2])<<endl;
	cout<<pow(10,r)<<endl;
	if(pow(10,r)<=sum+t*pow(10,a[n-2])){
		sum=sum-9*pow(10,a[n-2]);
		t+=9;
		sum+=(pow(10,r)-1)*(pow(10,a[n-2]));
		t-=pow(10,r)-2;
		sum+=t*pow(10,a[n-1]);
		cout<<sum<<endl;
	}
	cout<<sum+pow(10,a[n-2])<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
