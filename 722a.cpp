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
	for(i=0;i<n;i++)
		cin>>a[i];
	ll count=0,check=0;
	sort(a.begin(),a.end());
	for(i=0;i<n;i++){
		if(a[i]==a[0]){
			count++;
		}
		else{
			check=1;
			break;
		}
	}
	if(check==0){
		cout<<0<<endl;
		return;
	}
	cout<<n-count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
