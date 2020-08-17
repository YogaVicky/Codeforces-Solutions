#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair


void solve()
{
	ll n,st, fd;
	cin >> n;
	vector<ll> a(n);
	for(int i =0;i<100000;i++);
		for(int i =0;i<100000;i++);
	for(int i =0;i<n;i++) cin >> a[i];
	st = 0, fd = n-1;
	for(int i =n-2;i>=0;i--) 
		if(a[i]>=a[i+1]) fd = i;
		else break;
	ll x = 0, y = 0;
	while(y!=fd)
	{	
		if(x==y)
			y++;
		else if(a[y]>=a[y-1])	
			y++;
		else 
			x = y;
		if(y==fd)
			break;
	}
	cout << x << endl;
    return ;
}

int32_t main()
{
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}