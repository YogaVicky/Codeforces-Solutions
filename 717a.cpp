#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n-1;i++){
		if(k>=a[i]){
			k-=(a[i]);
			a[n-1]+=a[i];
			a[i]=0;
		}
		else{
			a[i]=a[i]-k;
			a[n-1]+=k;
			k=0;
			break;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
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