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
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll t=(n-1)/2;
	while(a[t]==a[t-1] && t!=0){
		t--;
	}
	cout<<t<<endl;
	ll t1=t;
	cout<<a[t]<<" ";
	t++;
	j=0;
	for(;j<t1;j++){
		cout<<a[j]<<" "<<a[t]<<" ";
		t++;
	}
	for(j=t;j<n;j++)
		cout<<a[j]<<" ";
	cout<<endl;
}
int main(){
	ll t,i;
	t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

