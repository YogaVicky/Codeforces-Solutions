#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,check=0,x,m;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	vector<ll>a;
	for(i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			a.pb(i+1);
			a.pb(1);
			a.pb(i+1);
		}
	}
	cout<<a.size()<<" ";
	for(auto it=a.begin();it!=a.end();it++)
		cout<<*it<<" ";
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