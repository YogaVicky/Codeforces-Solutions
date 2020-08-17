#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	vector<ll>a;
	if(n<=m)
		cout<<1<<endl;
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				a.pb(i);
				a.pb(n/i);
			}
		}
		ll check=0;
		sort(a.begin(),a.end());
		if(a.size()>0){
			for(i=a.size()-1;i>=0;i--){
				if(a[i]<=m){
					check=1;
					cout<<n/a[i]<<endl;
					break;
				}
			}
			if(check==0)
				cout<<n<<endl;
		}
		else
			cout<<n<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}