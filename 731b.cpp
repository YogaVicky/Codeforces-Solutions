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
	string s;
	cin>>s;
	n = s.length();
	for(i=0;i<n;i++){
		if(s[i]=='a'){
			break;
		}
	}
	// cout<<i<<endl;
	if(i==n){
		cout<<"NO"<<endl;
		return;
	}
	j=i;
	i--;
	j++;
	char t = 'b';
	while(i>=0 || j<n){
		if(i>=0 && s[i]==t){
			i--;
			t++;
		}
		else if(i<n && s[j]==t){
			j++;
			t++;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}