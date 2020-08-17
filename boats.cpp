#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll max = 0;
	for(i=2;i<=100;i++){
		map<ll,ll>m;
		for(k=0;k<n;k++)
			m[k]=0;
		ll s = 0;
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(a[j]+a[k]==i && m[j]==0 && m[k]==0 && j!=k){
					m[j]=1;
					m[k]=1;
					s++;
					break;
				}
			}
		}
		if(s>max){
			// cout<<i<<endl;
			// cout<<s<<endl;
			max = s;
		}
	}
	cout<<max<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}