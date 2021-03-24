#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll l=a[0];
	for(i=0;i<n;i++){
		if(a[i]<=l){
			l=a[i];
			a[i]=0;
		}
		else{
			a[i]-=l;
			break;
		}
	}
	ll r=a[n-1];
	for(i=n-1;i>=0;i--){
		if(a[i]<=r){
			r=a[i];
			a[i]=0;
		}
		else{
			a[i]-=r;
			break;
		}	
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++){
		if(a[i]!=0){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}