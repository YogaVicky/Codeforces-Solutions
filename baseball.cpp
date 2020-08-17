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
	for(i=0;i<n;i++)
		cin>>a[i];
	vector<ll>b(n);
	for(i=0;i<n;i++){
		if(a[i]==i+1)
			b[i]=1;
		else
			b[i]=0;
	}
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	for(i=0;i<n;i++){
		
	}
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