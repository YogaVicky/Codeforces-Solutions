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
	for(i=0;i<n;i++){
		if(i%2==0){
			if(a[i]<0)
				a[i]*=-1;
		}
		else{
			if(a[i]>0)
				a[i]*=-1;	
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
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