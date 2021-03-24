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
	vector<ll>a(n);
	ll x=0,y=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i%2==1)
			y+=a[i];
		else
			x+=a[i];
	}
	if(x<y)
		for(i=0;i<n;i+=2){
			a[i]=1;
		}
	else
		for(i=1;i<n;i+=2){
			a[i]=1;
		}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}