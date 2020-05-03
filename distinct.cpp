#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll check(ll n){
	vector<ll>a;
	ll t;
	while(n){
		t = n%10;
		a.pb(t);
		n/=10;
	}
	ll count = 1,i;
	sort(a.begin(),a.end());
	for(i=0;i<a.size()-1;i++){
		if(a[i]==a[i+1])
			count = 0;
	}
	return count;
}
void solve(){
	ll n,i,m;
	cin>>n>>m;
	ll count = 0;
	for(i=n;i<=m;i++){
		if(check(i)==1){
			count = 1;
			cout<<i<<endl;
			break;
		}
	}
	if(count==0)
		cout<<-1<<endl;	
}	
int main(){
	solve();
	return 0;
}