#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k,j;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<ll>g;
	ll f=0,count=0;
	ll fs=0,ls=0;
	for(i=0;i<n;i++){
		if(s[i]=='W'){
			i++;
			fs=i-1;
			break;
		}
	}
	for(j=n-1;j>=0;j--){
		if(s[j]=='W'){
			j++;
			ls=n-j;
			break;
		}
	}
	// cout<<fs<<" "<<ls<<endl;
	for(;i<n;i++){	
		if(s[i]=='L')
			count++;
		else if(s[i]=='W' && count!=0){
			g.pb(count);
			count=0;
		}
	}
	ll ans = 0;
	for(i=0;i<n;i++){
		if(s[i]=='W'){
			if(f==0){
				ans+=1;
				f=1;
			}
			else{
				ans+=2;
			}
		}
		else
			f=0;
	}
	// cout<<ans<<endl;
	sort(g.begin(),g.end());
	for(i=0;i<g.size();i++){
		if(g[i]<=k){
			ans+=g[i]*2+1;
			k-=g[i];
		}
		else{
			ans+=k*2;
			k=0;
		}
		// cout<<g[i]<<" ";
		// cout<<ans<<endl;
	}
	if(k>0 && (fs!=0 || ls!=0)){
		fs+=ls;
		if(k>fs)
			ans+=fs*2;
		else
			ans+=k*2;
	}
	else if(k>0){
		k--;
		n--;
		ans+=1;
		if(k>n)
			ans+=n*2;
		else
			ans+=k*2;		
	}
	// cout<<endl;
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