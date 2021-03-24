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
	string s;
	cin>>s;
	ll a=0,d=0;
	for(i=0;i<n;i++){
		if(s[i]=='A')
			a++;
		else
			d++;
	}
	if(a==d)
		cout<<"Friendship";
	else if(a>d)
		cout<<"Anton";
	else
		cout<<"Danik";
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}