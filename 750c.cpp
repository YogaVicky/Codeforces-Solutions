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
	cin>>n;
	string s;
	cin>>s;
	char a='a';
	ll l,r;
	ll check,ans=INT_MAX,temp;
	for(i=0;i<26;i++){
		// cout<<a<<endl;
		l=0,r=n-1;
		check=1;
		temp=0;
		while(l<r){
			// cout<<s[l]<<" "<<s[r]<<endl;
			if(s[l]==s[r]){
				l++;
				r--;
			}
			else if(s[l]==a){
				l++;
				temp++;
			}
			else if(s[r]==a){
				r--;
				temp++;
			}
			else{
				check=0;
				// cout<<l<<" "<<r<<endl;
				break;
			}
		}
		a++;
		if(check)
			ans=min(ans,temp);
	}
	if(ans==INT_MAX)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
