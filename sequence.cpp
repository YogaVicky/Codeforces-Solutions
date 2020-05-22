#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	k--;
	ll check = 0;
	while(k--){
		ll m1=9,m2=1,m=n;
		while(m>0){
			if(m%10){
				m1 = min(m%10,m1);
				m2 = max(m%10,m2);
			}
			else
				check = 1;
			m/=10;
		}
		if(check)
			break;
		n+=m1*m2;
	}
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