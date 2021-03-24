#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	map<ll,ll>m;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	ll in = -1,val=0,check=0;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second == 1){
			val = it->first;
			check=1;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==val){
			cout<<i+1<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}