#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	while(1){
		ll l = n;
		m =0;
		while(l){
			m+=l%10;
			l/=10;
		}
		if(gcd(n,m)>1){
			cout<<n<<endl;
			break;
		}
		else
			n++;
	}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);

	while(t--){
		solve();
	}
	return 0;
}