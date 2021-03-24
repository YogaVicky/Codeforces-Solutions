#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,x;
	cin>>n>>x;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	ll check = 1;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<ll>());
	for(i=0;i<n;i++){
		if(a[i]+b[i]>x){
			check=0;
			break;
		}
	}
	if(check)
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