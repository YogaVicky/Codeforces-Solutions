#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
ll findGCD(vector<ll>arr, ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	vector<ll>b;
	sort(a.begin(),a.end());
	for(i=1;i<n;i++){
		if(abs(a[i]-a[0]))
			b.pb(abs(a[i]-a[0]));
	}
	if(b.size()==0)
		cout<<-1<<endl;
	else if(b.size()==1)
		cout<<b[0]<<endl;
	else{
		ll ans =findGCD(b, b.size());
		if(ans<=INT_MAX)
			cout<<findGCD(b, b.size()) << "\n";
		else
			cout<<-1<<endl;
	}
	return;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

