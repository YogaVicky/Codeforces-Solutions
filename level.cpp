#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(int j=0;j<10;j++);
		vector<pair<ll,ll>>a(n);
		ll i;
		for(i=0;i<n;i++){
			cin>>a[i].first>>a[i].second;
		}
		ll check = 1;
		if(a[0].first<a[0].second)
			check=0;
		for(i=1;i<n;i++){
			if(a[i].second>a[i].first)
				check = 0;
			if(a[i].second<a[i-1].second||a[i].first<a[i-1].first)
				check = 0;
			if(a[i].second-a[i-1].second>a[i].first-a[i-1].first)
				check = 0;
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}