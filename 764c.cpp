#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,sum=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	set<ll>s;
	for(i=0;i<n;i++){
		while(a[i]>n){
			a[i]/=2;
		}
		while(s.find(a[i])!=s.end() && a[i]>0){
			a[i]/=2;
		}
		if(a[i]!=0){
			s.insert(a[i]);
		}
	}
	check=0;
	sort(a.begin(),a.end());
	sort(a.begin(),a.end());
	for(i=0;i<n;i++){
		if(a[i]<i+1){
			cout<<"NO"<<endl;
			return;
		}
		else{
			while(a[i]>i+1){
				a[i]/=2;
			}
			if(a[i]!=i+1){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
	return;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}