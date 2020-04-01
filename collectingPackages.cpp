#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		ll n,i,b,c,check=1,j;
		cin>>n;
		vector<pair<ll,ll>>a;
		for(i=0;i<n;i++){
			cin>>b>>c;
			a.pb(make_pair(b,c));
		}
		sort(a.begin(),a.end());
		// for(i=0;i<n;i++){
		// 	cout<<a[i].first<<" "<<a[i].second<<endl;
		// }
		ll r = 0;
		ll u = 0; 
		for(i=0;i<n;i++){
			r = a[i].first - r;
			if(r<0){
				check = 0;
				cout<<"NO"<<endl;
				break;
			}
			for(j=0;j<r;j++)
				s.append("R");
			r = a[i].first;
			u = a[i].second - u;
			if(u<0){
				check = 0;
				cout<<"NO"<<endl;
				break;
			}
			for(j=0;j<u;j++)
				s.append("U");
			u = a[i].second;
		}
		if(check==1)
			cout<<"YES"<<endl<<s<<endl;
	}
	return 0;
}