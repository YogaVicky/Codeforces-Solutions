#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	if(n%2==0){
		for(i=n;i>=1;i--)
			cout<<i<<" ";
	}
	else{
		for(i=n;i>=1;i--){
			if(i!=n/2+1)
				cout<<i<<" ";			
		}
		cout<<n/2+1;
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