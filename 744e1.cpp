#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void showdq(deque <ll> g)
{
    deque <ll> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it<<" ";
    cout << '\n';
}

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	deque<ll>d;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(d.empty())
			d.push_front(a[i]);
		else{
			if(a[i]<d.front())
				d.push_front(a[i]);
			else
				d.push_back(a[i]);	
		}

	}
	showdq(d);
	// cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
