#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	if((n-(k-1)*1)%2==1 && (n-(k-1)*1)>0){
		cout<<"YES"<<endl;
		for(i=0;i<k-1;i++)
			cout<<"1"<<" ";
		cout<<n-(k-1)*1<<endl;
	}
	else if((n-(k-1)*2)%2==0 && (n-(k-1)*2)>0){
		cout<<"YES"<<endl;
		for(i=0;i<k-1;i++)
			cout<<"2"<<" ";
		cout<<n-(k-1)*2<<endl;	
	}
	else{
		cout<<"NO"<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}