#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	string s;
	cin>>s;
	ll check1=0,check2 = 0;
	for(i=0;i<s.length();i++){
		if(s[i]=='1')
			check1++;
		if(s[i]=='0')
			check2++;
	}
	if(check1==0||check2==0)
		cout<<s;
	else{
		char arr[2]= {'0','1'};
		ll len = s.length()*2;
		ll f;
		if(s[0]=='0')
			f=0;
		else
			f=1;
		for(i=0;i<len;i++){
			cout<<arr[f%2];
			f++;
		}
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll j;
	for(j=0;j<10;j++);
	while(t--){
		solve();
	}
	return 0;
}