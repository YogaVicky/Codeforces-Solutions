#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll check = 0;
	for(i=0;i<n-1;i++){
		if(a[i+1]-a[i]>1){
			check=1;
			break;
		}
	}
	if(check==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}