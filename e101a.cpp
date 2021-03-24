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
	if(s[0]==')' || s[n-1]=='('){
		cout<<"NO"<<endl;
		return;
	}
	ll count = 0,count1=0,count2=0;
	for(i=0;i<n;i++){
		if(s[i]=='?')
			count++;
		else if(s[i]=='(')
			count1++;
		else
			count2++;
	}
	if(abs(count1-count2)<=count && (count-abs(count1-count2))%2==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}