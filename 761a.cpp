#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	string a,b;
	cin>>a>>b;
	ll m[26]={0};
	sort(a.begin(),a.end());
	for(i=0;i<a.length();i++){
		m[a[i]-'a']++;
	}
	if(m[0]==0 || m[1]==0 || m[2]==0){
		// cout<<"here"<<endl;
		cout<<a<<endl;
		return;
	}
	string test = "abc";
	if(b!=test){
		cout<<a<<endl;
	}	
	else{

		for(i=0;i<m[0];i++){
			cout<<'a';
		}
		for(i=0;i<m[2];i++){
			cout<<'c';
		}
		for(i=0;i<m[1];i++){
			cout<<'b';
		}
		for(i=3;i<26;i++){
			for(j=0;j<m[i];j++)
				cout<<char('a'+i);
		}	
		cout<<endl;
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}