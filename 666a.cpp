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
	string s;
	map<char,ll>m;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>s;
		for(j=0;j<s.size();j++){
			m[s[j]]++;
		}
	}
	ll check = 1;
	for(auto it = m.begin();it!=m.end();it++){
		// cout<<it->first<<" "<<it->second<<endl;
		if(it->second%n!=0)
			check=0;
	}
	if(check)
		cout<<"YES";
	else
		cout<<"NO";
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