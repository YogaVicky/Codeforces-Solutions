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
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]!=a[1] && a[0]!=a[2]){
		cout<<1<<endl;
		return;
	}
	for(i=1;i<n-1;i++){
		if(a[i]!=a[i-1] && a[i]!=a[i+1]){
			cout<<i+1<<endl;
		return;		
		}
	}
	cout<<n<<endl;
	return;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}