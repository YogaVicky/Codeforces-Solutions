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
	ll a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	n = s.length();
	for(i=0;i<n;i++){
		if(s[i]=='0')
			a--;
		else if(s[i]=='1')
			b--;
	}
	for(i=0;i<n;i++){
		if(s[i]!='?' ^ s[n-i-1]!='?'){
			if(s[i]!='?'){
				if(s[i]=='1'){
					b--;
					s[n-i-1]='1';
				}
				else{
					a--;
					s[n-i-1]='0';	
				}
			}
			else{
				if(s[n-i-1]=='1'){
					b--;
					s[i]='1';
				}
				else{
					a--;
					s[i]='0';	
				}
			}
		}
	}
	// cout<<a<<" "<<b<<endl;
	if(a<0 || b<0){
		cout<<-1<<endl;
		return;
	}
	ll check=0;
	for(i=0;i<n;i++){
		if(s[i]=='?' && i!=n-i-1){
			if(a>=2){
				s[i]='0';
				s[n-i-1]='0';
				a-=2;
			}
			else{
				check=1;
				break;
			}
		}
		else if(s[i]=='?' && i==n-i-1){
			if(a>=1){
				s[i]='0';
				a--;
			}
			else{
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(s[i]=='?' && i!=n-i-1){
			if(b>=2){
				s[i]='1';
				s[n-i-1]='1';
				b-=2;
			}
			else{
				break;
			}
		}
		else if(s[i]=='?' && i==n-i-1){
			if(b>=1){
				s[i]='1';
				b--;
			}
			else{
				break;
			}	
		}
	}
	if(a<0 || b<0){
		cout<<-1<<endl;
		return;
	}
	for(i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1] || s[i]=='?' || s[n-i-1]=='?'){
			cout<<-1<<endl;
			return;
		}
	}
	for(i=0;i<n;i++){
		cout<<s[i];
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