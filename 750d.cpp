#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n%2==0){
		for(i=0;i<n-1;i++){
			cout<<-1*a[i+1]<<" "<<a[i]<<" ";
			i++;
		}
	}
	else{	
		for(i=0;i<n-3;i++){
			cout<<-1*a[i+1]<<" "<<a[i]<<" ";
			i++;
		}	
		if(a[n-1]+a[n-2]!=0){
			cout<<-1*(a[n-1]+a[n-2])<<" "<<a[n-3]<<" "<<a[n-3]<<" ";
		}
		else if(a[n-1]+a[n-3]!=0){
			cout<<a[n-2]<<" "<<-1*(a[n-1]+a[n-3])<<" "<<a[n-2]<<" ";	
		}
		else
			cout<<a[n-1]<<" "<<a[n-1]<<" "<<-1*(a[n-2]+a[n-3])<<" ";	
	}
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
