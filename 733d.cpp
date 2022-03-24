#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m>>k;
	vector<ll>a(n);
	if(n%2==0 && m%2==0 && k%2==0){
		cout<<"YES"<<endl;
	}
	else if(n%2!=0 && m%2==0 && k>=m/2 && (k-m/2)%2==0)
		cout<<"YES"<<endl;
	else if(n%2==0 && m%2!=0 && k<=n*m/2-n/2 && k%2==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
