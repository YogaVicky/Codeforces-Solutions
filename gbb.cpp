#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x;
	ll check1=0;
	cin>>n;
	string s;
	cin>>s;
	string ans="";
	ans+=s[0];
	for(i=1;i<n;i++){
		if(s[i]<s[i-1])
			ans+=s[i];
		else if(s[i]==s[i-1] && i>1)
                ans+=s[i];
		else
			break;
	}
	// cout<<ans<<endl;
	string check=ans;
	reverse(ans.begin(),ans.end());
	check+=ans;
	cout<<check<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}