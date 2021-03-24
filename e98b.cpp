#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j;
	cin>>n;
	vector<ll>a(n);
	ll m = INT_MIN;
	ll sum = 0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		m = max(m,a[i]);
	}
	ll h = sum%(n-1)==0?sum/(n-1):sum/(n-1)+1;
	m = max(m,h);
	cout<<(n-1)*m-sum<<endl;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}