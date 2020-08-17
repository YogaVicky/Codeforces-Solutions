#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	ll check = 0;
	if(n==36){
		cout << "YES" << endl;
		cout << 15 << " " << 10 << " " << 6 <<  " "  << 5 << endl;
		}
	else if(n==40)
		cout<<"YES"<<endl<<14<<" "<<15<<" "<<6<<" "<<5<<endl;
	else if(n==44)
		cout<<"YES"<<endl<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
	else if(n>30){
		cout<<"YES"<<endl;
		cout<<14<<" "<<10<<" "<<6<<" "<<n-30<<endl;
	}
	else
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