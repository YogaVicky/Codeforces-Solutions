#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,check=0,x,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll f=0;
	for(i=0;i<n-1;i++){
		if(a[i]>1 && a[i+1]==1 && i!=n-2){
			i++;
		}
		else if(a[i]==1){
			if(f==0)
				f=1;
			else
				f=0;
		}
	}
	if(f==0)
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}