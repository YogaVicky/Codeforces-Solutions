#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b(n),c(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
		cin>>b[i];
	ll j,check=0,temp,count=0;
	sort(c.begin(),c.end());
	for(i=0;i<n;i++){
		if(a[i]!=c[i]){
			check=1;
			break;
		}
	}
	if(check==0)
		cout<<"Yes"<<endl;
	else{
		ll o=0,z=0;
		for(i=0;i<n;i++){
			if(b[i]==0)
				z++;
			else
				o++;
		}
		if(o==n || z==n)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;	
	}	
}
int main(){
	ll t,i;
	for(i=0;i<1000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}