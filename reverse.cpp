#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	string s;
	cin>>s;
	ll sum1=0,sum2=0;
	for(i=0;i<n-1;i++){
		if(s[i]=='1' && s[i+1]=='1')
			sum1++;
		if(s[i]=='0' && s[i+1]=='0')
			sum2++;
	}
	cout<<max(sum1,sum2)<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}