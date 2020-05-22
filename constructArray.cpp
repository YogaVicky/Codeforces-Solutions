#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll k;
void recur(ll l,ll r,ll a[]){
	ll pos;
	if(l<=r){
		if((l+r)%2==0){
			pos = (l+r)/2;
			a[pos]=k;
			if(l<=pos-1){
				k++;
				recur(l,pos-1,a);
			}
			if(pos+1<=r){
				k++;
				recur(pos+1,r,a);
			}  
		} 
		else{
			pos = (l+r)/2;
			a[pos]=k;
			if(pos+1<=r){
				k++;
				recur(pos+1,r,a);
			}
			if(l<=pos-1){
				k++;
				recur(l,pos-1,a);
			}	
		}
	}
}
void solve(){
	ll n,i;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		a[i]=0;
	k = 1;
	recur(0,n-1,a);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}