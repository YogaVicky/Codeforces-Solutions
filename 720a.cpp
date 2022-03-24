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
	ll a,b;
	cin>>a>>b;
	// vector<ll>a(n);
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
	// cout<<a*b<<" "a*b*2<<" "<<
	if(b==1)
	cout<<"NO"<<endl;
	else cout<<"YES"<<endl<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

