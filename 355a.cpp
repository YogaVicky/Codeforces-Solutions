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
	cin>>n>>m;
	vector<ll>a(n);
	ll count =0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>m)
			count+=2;
		else
			count++;
	}
	cout<<count<<endl;

}
int main(){
	ll t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}