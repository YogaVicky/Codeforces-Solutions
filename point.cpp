#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,k;
	cin >> n >> k;
	if(n%2!=0) {
		if(k%2!=0) {
			if(k<=n) cout << 0 << endl;
			else cout << k-n << endl;
		}
		else {
			if(k<n)	cout << 1 << endl;
			else cout << k-n << endl;
		}
	}
	else {
		if(k&1) {
			if(k<n) cout << 1 << endl;
			else cout << k-n << endl;
		}
		else {
			if(k<=n) cout << 0 << endl;
			else cout << k-n << endl;
		}
	}
	return ;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}