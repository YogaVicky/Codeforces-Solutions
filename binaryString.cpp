#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,a,b,c;
	cin>>a>>b>>c;
	if(a==0 && c==0 &&  b!=0){
		for(i=0;i<b;i++){
			cout<<"01";
		}
		b=0;
	}
	if(c==0 && b!=0){
		for(i=0;i<=a;i++){
			cout<<"0";
		}
		a=-1;
		cout<<"1";
		b--;
		for(i=0;i<b;i++){
			cout<<"01";
		}
	}
	b--;
	if(a>0){
		for(i=0;i<=a;i++){
			cout<<"0";
		}
	}
	if(c>0){
		for(i=0;i<=c;i++){
			cout<<"1";
		}
	}
	if(b>0){
		for(i=0;i<b-1;i++)
			cout<<"01";
		cout<<"0";
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