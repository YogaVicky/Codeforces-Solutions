#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,x;
	cin>>n;
	string s;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>s;
	map<ll,ll>m;
	for(i=0;i<n;i++){
		if(s[i]=='0')
			m[a[i]]=0;
		else
			m[a[i]]=-1;
	}
	// for(auto it = m.begin();it!=m.end();it++){
	// 	cout<<it->first<<" "<<it->second<<" ";
	// }
	// cout<<endl;
	ll check=1;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second==0){
			m[it->first]=check;
			check++;
		}
	}	
	// for(auto it = m.begin();it!=m.end();it++){
	// 	cout<<it->first<<" "<<it->second<<" ";
	// }
	// cout<<endl;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second==-1){
			m[it->first]=check;
			check++;
		}
	}
	for(i=0;i<n;i++){
		cout<<m[a[i]]<<" ";
	}
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}