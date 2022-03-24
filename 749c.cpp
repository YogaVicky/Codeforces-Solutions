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
	cin>>n>>m;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	vector<ll>a;
	vector<ll>b;
	k=0;
	a.pb(k);
	ll check=0,check1=0;
	for(j=0;j<n;j++){
		if(s[j][0]=='.'){
			check=1;
			break;
		}
	}
	if(check)
		b.pb(1);
	else
		b.pb(0);
	
	for(i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<endl;
	
	// for(i=1;i<m;i++){
	// 	check=0,check1=0;
	// 	for(j=0;j<n;j++){
	// 		if(s[j][i]=='.'){
	// 			check=1;
	// 		}
	// 		if(s[j][i]=='.' && s[j][i-1]!='.' && s[j-1][i]!='.'){
	// 			check1=1;
	// 		}
	// 	}
	// 	if(check){
	// 		b.pb(true);
	// 	}
	// 	else{
	// 		k++;
	// 		a.pb(k);
	// 		b.pb(false);
	// 	}
	// 	if(check1){
	// 		k++;
	// 		a.pb(k);
	// 	}
	// 	else if(check && !check1){
	// 		a.pb(k);
	// 	}
	// }
	// cout<<a.size()<<" "<<b.size()<<endl;
	
	// for(i=0;i<b.size();i++)
	// 	cout<<b[i]<<" ";
	// cout<endl;
	// ll q;
	// cin>>q;
	// ll a,b;
	// while(q--){
	// 	cin>>a>>b;
	// }
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
