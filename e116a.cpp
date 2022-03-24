#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	string s;
	cin>>s;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
	n = s.length();
	ll a=0,b=0;
	for(i=0;i<s.length()-1;i++){
		if(s[i]=='a' && s[i+1]=='b')
			a++;
		else if(s[i+1]=='a' && s[i]=='b')
			b++;
	}
	// ll c;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
	if(a==b){
		cout<<s<<endl;
		return;
	}
	else if(a<b){
		if(s[0]=='b' && s[1]=='a'){
			s[0]='a';
			cout<<s<<endl;
			return;
		}
		else if(s[n-2]=='b' && s[n-1]=='a'){
			s[n-1]='b';
			cout<<s<<endl;
			return;	
		}
		else{
			s[0]='a';
			cout<<s<<endl;
			return;
		}
	}
	else{
		if(s[0]=='a' && s[1]=='b'){
			s[0]='b';
			cout<<s<<endl;
			return;
		}
		else if(s[n-2]=='a' && s[n-1]=='b'){
			s[n-1]='a';
			cout<<s<<endl;
			return;	
		}
		else{
			s[0]='b';
			cout<<s<<endl;
			return;	

		}
	}
}
int main(){
	ll t,i;
	cin>>t;

	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);

	while(t--){
		solve();
	}
	return 0;
}
