#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	map<ll,ll>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	vector<ll>b;
	for(auto it = m.begin();it!=m.end();it++){
		b.pb(it->second);
	}
	sort(b.begin(),b.end());
	n=b.size();
	if(n==1){
		cout<<b[0]<<endl;
		return;
	}
	ll l=0,r=n-1;
	ll s1=0,s2=0;
	while(l<r){
		if(s1==s2){
			s1+=b[l];
			s2+=b[r];
			l++;
			r--;
		}
		else if(s1<s2){
			s1+=b[l];
			l++;
		}
		else{
			s2+=b[r];
			r--;
		}
	}
	if(l==r){
		ll h = abs(s1-s2);

		if(b[l]-abs(s1-s2)>0){
			if((b[l]-abs(s1-s2))%2==0){
				cout<<0<<endl;
			}
			else
				cout<<1<<endl;
		}
		else{
			cout<<abs(s1-s2)-b[l]<<endl;
		}
	}
	else{
		cout<<abs(s1-s2)<<endl;
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}