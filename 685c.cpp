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
	cin>>n>>k;
	string a,b;
	cin>>a>>b;
	ll x[27]={0},y[27]={0};
	for(i=0;i<n;i++){
		x[a[i]-97]++;
		y[b[i]-97]++;

	}
	// for(i=0;i<26;i++){
	// 	cout<<x[i]<<" "<<y[i]<<endl;
	// }
	ll check = 1;
	for(i=0;i<26;i++){
		if(y[i]>x[i]){
			// cout<<"first"<<endl;
			check=0;
			break;
		}
		else if(y[i]==x[i]){
			x[i]=0;
		}
		else if(y[i]<x[i]){
			x[i]-=y[i];
			if(x[i]%k!=0){
				// cout<<"sec"<<endl;
				check=0;
				break;
			}
		}
		x[i+1]+=x[i];
	}
	if(check)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}