#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j;
	cin>>n;
	ll q = n;
	map<ll,ll>m;
	for(i=2;i*i<=n;i++){
		ll count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if(count>0){
			m[i]=count;
		}
	}
	// for(auto it = m.begin();it!=m.end();it++){
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }
	ll max = 0,val;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second>max){
			max = it->second;
			val = it->first;
		}
	}	
	vector<ll>a;
	ll p=1;
	for(i=0;i<max-1;i++){
		a.pb(val);
		p*=val;
	}
	a.pb(q/p);
	cout<<a.size()<<endl;
	for(i=0;i<a.size();i++)
		cout<<a[i]<<" ";
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