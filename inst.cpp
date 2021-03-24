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
	vector<ll>a(n),b(n),c(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	ll z=0,o=0;
	for(i=0;i<n;i++){
		cin>>c[i];
		if(c[i]==0)
			z++;
		else
			o++;
	}
	sort(a.begin(),a.end());
	ll check=0;
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			if(c[i]==1 && z==0){
				check=1;
				break;
			}
			if(c[i]==0 && o==0){
				check=1;
				break;
			}
		}
	}
	if(check)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}