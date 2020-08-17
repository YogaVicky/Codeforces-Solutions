#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll m = *max_element(a.begin(),a.end());
	m++;
	if(m==0){
		char j = 'a';
		for(i=0;i<n+1;i++){
			if(j=='z')
				j='a';
			cout<<j<<endl;
			j++;
		}
		return;
	}
	char e = 'a';
	string s = "";
	for(i=0;i<m;i++){
		if(e=='z')
			e='a';
		cout<<e;
		s+=e;
		e++;
	}
	cout<<endl;
	string s1 = s;
	string s2 = "";
	for(i=0;i<n;i++){
		ll f = a[i];
		for(j=0;j<f;j++){
			cout<<s1[j];
			s2+=s1[j];
		}
		for(;j<m;j++){
			if(e=='z')
				e='a';
			cout<<e;
			s2+=e;
			e++;
		}
		s1 = s2;
		s2 = "";
		cout<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}