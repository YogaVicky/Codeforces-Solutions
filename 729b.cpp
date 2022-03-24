#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

bool isPower(ll y, ll x)
{
    // The only power of 1 is 1 itself
    if (x == 1)
        return (y == 1);
 
    // Repeatedly comput power of x
    ll pow = 1;
    while (pow < y)
        pow *= x;
 
    // Check if power of x becomes y
    return (pow == y);
}
 

void solve(){
	ll n,i,j,k,m;
	ll a,b,c;
	cin>>n>>a>>b;
	ll check=0;
	if(a==1 && (n-1)%b==0)
		cout<<"Yes"<<endl;
	else if(a==1)
		cout<<"No"<<endl;
	else{
		for(i=1;i<=n;i*=a){
			if((n)%b==i%b){
				cout<<"Yes"<<endl;
				return;
			}
		}
		cout<<"No"<<endl;
	}	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
