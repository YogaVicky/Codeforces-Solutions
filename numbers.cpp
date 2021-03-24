#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n, y,i;
	cin >> n;
	vector<pair<ll,ll>>sol;
	y = n;
	sol.push_back(make_pair(y - 1, y));
	y = (y + (n - 1)) / 2 + (y + (n - 1)) % 2;
	for(i=n-2;i>=1;i--)
	{
		sol.push_back(make_pair(i, y));
		y = (y + i) / 2 + (y + i) % 2;
	}
	cout<<y<<endl;
	for(i=0;i<n-1;i++)
	{
		cout<<sol[i].first<<" "<<sol[i].second<<endl;
	}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}