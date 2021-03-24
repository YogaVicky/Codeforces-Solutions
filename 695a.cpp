#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	ll b = 9;
	if(n==1)
		cout<<9<<endl;
	else if(n==2)
		cout<<98<<endl;
	else{
		cout<<98;
		for(i=0;i<n-2;i++){
			cout<<b;
			if(b==9){
				b=0;
			}
			else{
				b++;
			}
		}	
		cout<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}