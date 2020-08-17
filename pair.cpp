#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(2*n);
	for(i=0;i<2*n;i++)
		cin>>a[i];
	map<ll,ll>b;
	for(i=0;i<2*n;i++){
		if(b[a[i]]!=1){
			cout<<a[i]<<" ";
			b[a[i]]=1;
		}
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