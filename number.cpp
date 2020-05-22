#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	for(i=2;i<=n;i++){
		if(n%i==0)
			break;
	}
	n+=i;
	k--;
	for(i=0;i<k;i++)
		n+=2;
	cout<<n<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}