#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k,j;
	cin>>n>>k;
	vector<ll>a(n);
	set<ll,greater<ll>>s;
	ll m = 0,m1=10000;
	for(i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
		if(a[i]>m)
			m = a[i];
		if(m1>a[i])
			m1 = a[i];
	}
	if(k<s.size())
		cout<<-1<<endl;
	else{
		cout<<k*n<<endl;
		ll l = s.size();
		while(n--){
			ll h = k;
			ll f = m;
			for(auto it=s.begin();it!=s.end();it++){
				cout<<*it<<" ";
				h--;
			}
			while(h--){
				cout<<f<<" ";
				if(f>m1)
				f--;
			}
		}
		cout<<endl;
	}
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