#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll sum = a[0];
	for(i=1;i<n;i++){
		ll temp = a[i];
		while(temp--){
			k-=i;
			if(k<0)
				break;
			else{
				sum++;
			}
		}
	}
	cout<<sum<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}