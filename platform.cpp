#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,d;
	cin>>n>>m>>d;
	vector<ll>a(m);
	for(i=0;i<m;i++)
		cin>>a[i];
	ll j = 0,k;
	ll l = a[j];
	ll dis = d;
	vector<ll>b;
	ll pos = 0;
	ll check = 1;
	while(j<m){
		for(i=0;i<dis-1;i++){
			l++;
			b.pb(0);
		}
		for(i=0;i<a[j];i++){
			l++;
			b.pb(j+1);
		}
		j++;
		dis = d;
	}
	for(i=0;i<b.size();i++)
			cout<<b[i]<<" ";
		cout<<endl;
	if(n-l>d){
		cout<<"YES"<<endl;
		for(i=0;i<b.size();i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;	
	}
}
int main(){
	ll t;
	solve();
	return 0;
}