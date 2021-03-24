#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	ll a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	n = s.length();
	ll c = 0;
	ll ac = 0;
	for(i=0;i<n;i++){
		if(s[i]=='1'){
			c++;
			for(j=i+1;j<n;j++){
				if(s[i]=='1'){
					i++;
				}
				else
					break;
			}
		}
	}
	// cout<<c<<endl;
	ll check=0,check2=0;
	vector<ll>z;
	ll ch=0;
	for(i=0;i<n;i++){
		if(s[i]=='1' && check==0)
			check=1;
		else if(s[i]=='1' && check2){
			z.pb(ch);
			ch=0;
			check2=0;
		}
		if(s[i]=='0' && check){
			check2=1;
			ch++;
		}
	}
	ll cost = c*a;
	sort(z.begin(),z.end());
	// for(i=0;i<z.size();i++){
	// 	cout<<z[i]<<" ";
	// }
	// cout<<endl;
	for(i=0;i<z.size();i++){
		if(cost-a+z[i]*b < cost){
			cost = cost-a+z[i]*b;
		}
		else
			break;
	}
	cout<<cost<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}