#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	string s;
	cin>>s;
	vector<ll>a,b;
	ll l=0,r=n-1;
	for(i=0;i<1100000;i++);
		for(i=0;i<1100000;i++);
			for(i=0;i<1100000;i++);
				for(i=0;i<1100000;i++);
					for(i=0;i<1100000;i++);
						for(i=0;i<1100000;i++);
	while(l<r){
		if(s[l]=='1' && s[r]=='0'){
			s[l]='0';
			s[r]='1';
			a.pb(l);
			b.pb(r);
			l++;
			r--;
		}
		else if(s[l]=='1'){
			r--;
		}
		else if(s[r]=='0'){
			l++;
		}
		else{
			l++;
			r--;
			continue;
		}
	}
	if(a.size()==0){
		cout<<0<<endl;
		return;
	}
	else{
		cout<<1<<endl;
		cout<<b.size()*2<<" ";
		for(i=0;i<a.size();i++)
			cout<<a[i]+1<<" ";
		for(i=b.size()-1;i>=0;i--)
			cout<<b[i]+1<<" ";
	}
	cout<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<1100000;i++);
		for(i=0;i<1100000;i++);
			for(i=0;i<1100000;i++);
				for(i=0;i<1100000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
