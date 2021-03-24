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
	ll count=0;
	string s;
	cin>>s;
	string s1=s;
	// ll count1=0;
	while(s1.length()>1){
		s="\0";
		ll res=0;
		count++;
		// count1++;
		for(i=0;i<s1.length();i++){
			res+=s1[i]-'0';
		}
		// cout<<res<<endl;
		while(res){
			ll temp=res%10;
			res/=10;
			char c='0'+temp;
			s+=c;
		}
		s1=s;
		// cout<<s1<<endl;
		// if(count1==2)
		// 	break;
		// break;
	}
	cout<<count<<endl;
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}