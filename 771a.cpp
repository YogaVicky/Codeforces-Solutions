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
	k=-1;
	for(i=0;i<n;i++){
		if(a[i]!=i+1){
			k=i;
			break;
		}
	}
	if(k==-1){
		for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;	
		return;
	}
	for(i=0;i<k;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++){
		if(a[i]==k+1){
			j=i;
			break;
		}
	}
	for(i=j;i>=k;i--){
		cout<<a[i]<<" ";
	}
	for(i=j+1;i<n;i++){
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
