#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n1,n,i,j,k;
	cin>>n;
	cin>>n1;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
		cin>>n1;
		cout<<1+n1/2<<endl;
}
int main(){
	ll n;
	cin >> n;
	vector<ll>a(n);
	map<ll, ll> m;
	ll r = 0;
	ll x = 0;
	ll sq = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		m[a[i]]++;
	}
	for (auto i : m)
	{
		if (i.second % 2 != 0)
		{
			x++;
			r = r + (i.second / 2);
			sq = sq + i.second / 4;
		}
		else
		{
			r = r + (i.second / 2);
			sq = sq + i.second / 4;
		}
	}
	ll q;
	cin >> q;
	while (q--)
	{
		char x1;
		cin >> x1;
		ll y;
		cin >> y;
		if (x1 == '+')
		{
			if (m[y] % 2 != 0)
			{
				if (m[y] % 4 == 3)
					sq++;
				x--;
				r++;
			}
			else
			{
				x++;
			}
			m[y]++;
		}
		else
		{
			if (m[y] % 2 != 0)
			{

				x--;
			}
			else
			{
				if (m[y] % 4 == 0)
					sq--;
				x++;
				r--;
			}
			m[y]--;
		}
		if (r >= 4 && sq >= 1)
			cout<<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
	return 0;
}

