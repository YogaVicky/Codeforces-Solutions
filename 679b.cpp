#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;

	temp=1;
	while(temp*2<n){
		check=temp;
		temp*=2;
	}
	// cout<<temp<<endl;
	for(i=1;i<temp;i++)
		cout<<i<<" ";
	cout<<0<<" ";
	for(i=temp;i<n;i++)
		cout<<i<<" ";
	cout<<endl;
	// vector<ll>a(n);
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
		
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

