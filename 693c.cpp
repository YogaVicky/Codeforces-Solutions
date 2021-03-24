#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll s=0;
	for(i=0;i<n;i++){
		ll s1=0;
		j=i;
		while(s1<n){
			s1+=a[j];
			j+=a[j];
			if(j>n-1)
				break;
		}
		if(s1>s)
			s=s1;
	}
	cout<<s<<endl;
}
int main(){
	ll t;				
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}