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
	cin>>n;
	vector<ll>a(n);
	ll c1=0,c2=0;
	ll s=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			c1++;
		else
			c2++;
		s+=a[i];
	}
	if(c1%2==1)
		cout<<"NO"<<endl;
	else if(c1==0 && c2%2==1)
		cout<<"NO"<<endl;
	else{
		if(s%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}