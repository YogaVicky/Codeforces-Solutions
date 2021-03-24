#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	vector<ll>a(n);
	ll o=0,z=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			o++;
		else
			z++;
	}
	ll q,p;
	// sort(a.begin(),a.end(),greater<ll>());
	for(i=0;i<m;i++){
		cin>>q;
		if(q==1){
			cin>>p;
			if(a[p-1]==1){
				a[p-1]=0;
				o--;
				z++;
			}
			else{
				a[p-1]=1;
				o++;
				z--;		
			}
		}
		else if(q==2){
			cin>>p;
			if(o>=p)
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}
	}
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}