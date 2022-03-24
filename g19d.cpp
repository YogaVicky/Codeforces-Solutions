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
	vector<ll>a(n),b(n);
	ll dp1[n],dp2[n];
	memset(dp1,0,sizeof(dp1));
	memset(dp2,0,sizeof(dp2));
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	dp1[0]=0;
	dp2[0]=0;
	for(i=1;i<n;i++){
		ll t1=dp1[i-1];
		ll t2=dp1[i-1];
		for(j=0;j<i;j++){
			t1+=(a[i]+a[j])*(a[i]+a[j]);
		}
		for(j=0;j<i;j++){
			t2+=(b[i]+a[j])*(b[i]+a[j]);
		}
		ll t3=dp2[i-1];
		ll t4=dp2[i-1];
		for(j=0;j<i;j++){
			t3+=(a[i]+b[j])*(a[i]+b[j]);
		}
		for(j=0;j<i;j++){
			t4+=(b[i]+b[j])*(b[i]+b[j]);
		}
		if(t1+t4>t2+t3){
			ll temp=b[i];
			b[i]=a[i];
			a[i]=temp;
			dp1[i]=t2;
			dp2[i]=t3;
		}
		else{
			dp1[i]=t1;
			dp2[i]=t4;	
		}
	}
	for(i=0;i<n;i++)
		cout<<dp1[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<dp2[i]<<" ";
	cout<<endl;
	cout<<dp1[n-1]+dp2[n-1]<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
