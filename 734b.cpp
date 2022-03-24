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
	string s,t;
	cin>>s>>t;
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
	ll check=0,check1=0;
	vector<ll>a;
	ll l;
	ll k1;
	for(i=0;i<s.length();i++){
		for(j=i;j<s.length();j++){
			// cout<<i<<" "<<j<<endl;
			ll check2=1,g=0;
			for(k=i;k<=j;k++){
				if(t[g]!=s[k]){
					check2=0;
					break;
				}
				g++;
				if(g==t.length()){
					check=1;
					break;
				}
			}
			// cout<<check2<<endl;
			// cout<<g<<" "<<k<<endl;
			if(check2==1){
				k-=2;
				for(;k>=0;k--){
					// cout<<"In "<<k<<endl;
					if(t[g]!=s[k]){
						check2=0;
						break;
					}		
					g++;
					if(g==t.length()){
						check=1;
						break;
					}
				}
			}
			if(check==1)
				break;
		}
		if(check==1)
			break;
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
