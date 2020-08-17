#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,check=0,x,m;
	cin>>n>>m;
	ll a[1001]={0},b[1001]={0};
	for(i=0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	for(i=0;i<m;i++){
		cin>>x;
		b[x]++;
	}
	for(i=0;i<1001;i++){
		if(a[i]>0 && b[i]>0){
			check=1;
			cout<<"YES"<<endl<<1<<" "<<i<<endl;
			break;
		}
	}
	if(check==0)
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}