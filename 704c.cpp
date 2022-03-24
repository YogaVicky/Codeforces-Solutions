#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0;
	cin>>n>>m;
	string s1,s2;
	cin>>s1>>s2;
	j=0;
	vector<ll>p(m,0),s(m,0);
	for(i=0;i<n;i++){
		if(j<m && s1[i]==s2[j]){
			p[j]=i;
			j++;
		}	
	}
	j=m-1;
	for(i=n-1;i>=0;i--){
		if(j<m && s1[i]==s2[j]){
			s[j]=i;
			j--;
		}	
	}
	for(i=0;i<m-1;i++){
		ans=max(ans,s[i+1]-p[i]);
	}
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}