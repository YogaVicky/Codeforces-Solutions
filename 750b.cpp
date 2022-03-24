#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	ll o=0,z=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0)
			z++;
		else if(a[i]==1)
			o++;
	}
	cout << (1ll << z) * o<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
