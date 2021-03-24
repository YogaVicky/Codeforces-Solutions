#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair 
void solve(){
	ll n,i;
	cin>>n;
	ll p = 2*n;
	while(n--){
		cout<<p<<" ";
		p+=2;
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