#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll check = 0;
void solve(){
	ll n,i,j,k;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	ll check=0;
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1]){
			cout<<"YES"<<endl;
			cout<<i<<" "<<i+1<<" "<<i+2<<endl;
			check=1;
			break;
		}
	}	
	if(check==0)
		cout<<"NO"<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		check=0;
		solve();
	}
	return 0;
}