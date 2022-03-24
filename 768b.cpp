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
	ll count=0;
	ll len=1;
	m=INT_MIN;
	for(i=0;i<n;i++){
		m=max(m,a[i]);
	}
	for(i=n-2;i>=0;i--){
		if(a[i]==a[n-1])
			len++;
		else{
			ll temp2=len;
			count++;
			while(temp2-- && i>=0){
				a[i]=a[n-1];
				i--;
				len++;
			}
			i++;
		}
	}
	cout<<count<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}