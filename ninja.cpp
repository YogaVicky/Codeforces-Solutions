#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	ll count = 0;
	char ch;
	map<ll,ll>m;
	ll g = n;
	ll check=0;
	vector<ll>a;
	ll b;
	for(i=0;i<2*n;i++){
		cin>>ch;
		if(ch=='+')
			count++;
		else{
			cin>>b;
			if(m.find(b)==m.end()){
				a.pb(b);
				m[b]=1;
				if(count==0){
					check=1;
					// break;
				}
				count--;
			}
			while(count--){
				if(m.find(g)!=m.end()){
					g--;
					count++;
				}
				else{
					m[g]=1;
					a.pb(g);
				}
			}
		}
	}
	if(check)
		cout<<"NO"<<endl;
	else{
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}