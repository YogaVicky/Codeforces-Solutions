#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	string s[n];
	ll j;
	for(i=0;i<n;i++)
		cin>>s[i];
	set<char>a[m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i].insert(s[i][j]);
		}
	}
	ll check = 0,count=0;
	for(i=0;i<m;i++){
		if(a[i].size()>1){
			count++;
			break;
		}
	}
	if(count>2)
		cout<<"-1"<<endl;
	else{
		int b[26]={0};
		ll pos = i;
		for(auto it=a[i].begin();it!=a[i].end();it++)
			b[*it-'a']=1;
		for(i=0;i<26;i++){
			if(b[i]!=1)
				break;
		}
		for(j=0;j<pos;j++)
			cout<<s[0][j];
		char d = 'a'+i;
		cout<<d;
		for(j=pos+1;j<m;j++)
			cout<<s[0][j];
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