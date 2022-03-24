#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(ll c){
	ll n,i,j,k,m,d;
	cin>>d>>n>>k;
	vector<ll>a(n);
	ll x,y;
	map<ll,ll>m1,m2;
	for(i=0;i<n;i++){
		cin>>a[i];
		cin>>x>>y;
		m1[a[i]]=x;
		m2[a[i]]=y;
	}
	vector<vector<ll>>ans;
	for(i=1;i<=d;i++){
		vector<ll>temp;
		for(j=0;j<n;j++){
			if(m1[a[j]]<=i && m2[a[j]]>=i)
				temp.pb(a[j]);
		}
		ans.pb(temp);
	}
	ll res=0;
	for(i=0;i<d;i++){
		vector<ll>temp=ans[i];
		sort(temp.begin(),temp.end());
		ll l=k;
		ll check=0;
		for(j=temp.size()-1;j>=0;j--){
			if(l==0)
				break;
			check+=temp[j];
			l--;
		}
		res=max(check,res);
	}
	cout<<"Case #"<<c<<": "<<res<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll c=1;
	while(t--){
		solve(c);
		c++;
	}
	return 0;
}
