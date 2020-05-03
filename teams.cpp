#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		set<ll>s;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		sort(a.begin(),a.end());
		ll m = 0,res=0,ans;
		if(n>1)
			m=1;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1])
				m++;
			else{
				res = max(res,m);
				m=1;
			}
		}
		res = max(res,m);
		ll l = s.size();
		// cout<<l<<" "<<res<<endl;
		if(l<res)
			cout<<l<<endl;
		else if(res<l)
			cout<<res<<endl;
		else
			cout<<res-1<<endl;
	}
	return 0;
}