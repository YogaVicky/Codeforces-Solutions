#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	for(i=0;i<100000;i++);
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll mx = a[n-1];
	ll me = a[n-1] + 1;
	if(a[0]!=0)
		me=0;
	else{
		for(i=1;i<n;i++){
			if(a[i]-a[i-1]>1)
				me=a[i-1]+1;
		}	
	}
	if(k==0){
		cout<<n<<endl;
		return;
	}
	map<ll,ll>mp;
	for(i=0;i<n;i++){
		mp[a[i]]=1;
	}
	if(me>mx){
		cout<<n+k<<endl;
	}
	else{
		ll ch = me+mx;
		if(ch%2==0){
			ch = ch/2;
		}
		else{
			ch = ch/2 + 1;	
		}
		if(mp[ch]==1){
			cout<<n<<endl;
		}
		else{
			cout<<n+1<<endl;
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}