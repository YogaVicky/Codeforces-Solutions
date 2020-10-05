#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);


	for(i=0;i<n;i++)
		cin>>a[i];
	ll c1=0,c2=0;
	for(i=0;i<n;i++){
		if(a[i]==0)
			c1++;
		else
			c2++;
	}
	if(c1==c2){
		cout<<n/2<<endl;
		for(i=0;i<n/2;i++){
			cout<<0<<" ";
		}
		cout<<endl;
	}
	else if(c1>c2){
		cout<<n/2<<endl;
		for(i=0;i<n/2;i++){
			cout<<0<<" ";
		}
		cout<<endl;	
	}
	else{
		if(n%2==0){
			cout<<n/2<<endl;
			for(i=0;i<n/2;i++){
			cout<<1<<" ";
		}
		cout<<endl;
		}
		else{
			cout<<n/2+1<<endl;
			for(i=0;i<n/2 + 1;i++){
			cout<<1<<" ";
		}
		cout<<endl;
		}	
	}

	

}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000;i++);
	while(t--){
		solve();
	}
	return 0;
}