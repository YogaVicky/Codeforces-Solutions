#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b,c;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			b.pb(a[i]);
		else
			c.pb(a[i]);
	}
	ll s = b.size(),f = c.size();
	ll check = 0,j;
	if(s%2==0 && f%2==0)
		cout<<"YES"<<endl;
	else if(s%2!=0 && f%2!=0){
		for(i=0;i<b.size();i++){
			for(j=0;j<c.size();j++){
				if(abs(b[i]-c[j])==1){
					check = 1;
					break;
				}
			}
			if(check==1)
				break;
		}
		if(check==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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