#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,i;
	cin>>n;
 	map<ll,ll>mp,mp1;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<ll>());
	for(i=0;i<n;i++){
		mp[a[i]] = 0;
	}
	for(i=0;i<n;i++){
		mp[a[i]]++;
	}
	for(i=0;i<n;i++){
		if(mp[a[i]]==1)
			cout<<a[i]<<" ";
		else
			mp1[a[i]]=mp[a[i]];
	}
	for(auto it=mp1.begin();it!=mp1.end();it++){
		while(it->second--)
			cout<<it->first<<" ";
	}
	cout<<endl;
	return 0;
}