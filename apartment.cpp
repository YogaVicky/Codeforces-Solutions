#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	if(n%3==0)
		cout<<n/3<<" "<<0<<" "<<0<<endl;
	else if(n%3==1 && n>4)
		cout<<(n-7)/3<<" "<<0<<" "<<1<<endl;
	else if(n>4)
		cout<<(n-5)/3<<" "<<1<<" "<<0<<endl;
	else
		cout<<-1<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}