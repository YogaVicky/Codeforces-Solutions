#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n>>k;
	string s;
	cin>>s;
	string r = "";
	r+=s[0];
	for(i=1;i<n;i++){
		if(s[i]>s[0]){
			break;
		}
		else{
			r+=s[i];
		}
	}
	ll l = r.length(); 
	if((k%l)==0){
		for(i=0;i<k/l;i++)
			cout<<r;
		cout<<endl;
	}
	else{
		for(i=0;i<k/l;i++)
			cout<<r;
		for(j=0;j<k-l*i;j++){
			cout<<r[j];
		}
		cout<<endl;
	}
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
