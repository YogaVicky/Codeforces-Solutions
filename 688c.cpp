#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	cin>>n>>m;
	string s;
	// vector<ll>a(n);
	cin>>s;
	ll check=1;
	for(i=m;i<n;i++){
		if(s[i%m]=='?'){
			s[i%m]=s[i];
		}
		if(s[i%m]!=s[i] && s[i]!='?'){
			check=0;
			break;
		}
	}
	// cout<<check<<endl;
	if(check){
		ll c1=0,c2=0,c3=0;
		for(i=0;i<m;i++){
			if(s[i]=='1')
				c1++;
			else if(s[i]=='0')
				c2++;
			else
				c3++;
		}
		if(c1==c2){
			if(c3%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			ll d = abs(c1-c2);
			c3-=d;
			if(c3<0)
				cout<<"NO"<<endl;
			else{
				if(c3%2!=0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;	
			}
		}
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