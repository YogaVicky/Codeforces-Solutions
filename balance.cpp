#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	n = n/2;
	ll sum = 0;
	ll s = 1;
	while(n--){
		sum+=pow(2,s);
		s++;
	}
	cout<<sum<<endl;
}
int main(){
	ll t,j;
	cin>>t;
	for(j=0;j<10;j++);
	while(t--){
		solve();
	}
	return 0;
}