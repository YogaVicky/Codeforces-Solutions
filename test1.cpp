#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,j;
	cin>>n>>m;
	ll a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	ll count = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			if(a[i][j]==0)
				count++;
	}
	if(count%2==0)
		cout<<"Vivek"<<endl;
	else
		cout<<"Ashish"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}