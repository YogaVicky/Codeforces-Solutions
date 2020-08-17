#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	string a;
	cin>>a;
	ll l = 1,m=1;
	vector<ll>p;
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){
			l++;
			p.pb(l);
			if(l>m)
				m=l;
		}
		else{
			l=1;
			p.pb(l);
		}
	}
	cout<<m<<endl;
	cout<<1<<" ";
	for(auto it = p.begin();it!=p.end();it++){
		cout<<*it<<" ";
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