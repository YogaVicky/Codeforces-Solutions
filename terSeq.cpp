#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	ll x1,y1,z1,x2,y2,z2;
	cin>>x1>>y1>>z1;
	cin>>x2>>y2>>z2;
	ll sum = 0;
	if(z1<=y2){
		sum=z1*2;
		y2=y2-z1;
		z1=0;
	}
	else{
		sum=y2*2;
		y2=0;
		z1=z1-y2;
	}
	if(x1>z2){
		x1=x1-z2;
		z2=0;
	}
	else{
		x1=0;
		z2=z2-x1;	
	}
	if(x1>z2){
		x1=x1-z2;
		z2=0;
	}
	else{
		x1=0;
		z2=z2-x1;	
	}
	
	if(x1!=0){

	}
	else{

	}
	cout<<sum<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}