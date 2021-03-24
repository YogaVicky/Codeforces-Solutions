#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	map<ll,ll>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	ll in = -1,val,check=0;
	ll ma = INT_MAX;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second<ma){
			ma = it->second;
			val = it->first;
		}
	}
	ll count = 0,count1=0;
	cout<<val<<endl;
	for(i=0;i<n;i++){
		if(a[i]==val && check==0){
			if(count1>0){
				count1=0;
				count++;
			}
			check=1;
		}
		else if(a[i]==val && check==1){
			if(count1>0){
				count1=0;
				count++;
			}
		}
		else{
			count1++;
		}
	}
	if(a[n-1]!=val){
		count++;
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}