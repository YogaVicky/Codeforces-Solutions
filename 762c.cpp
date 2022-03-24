#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	string a,b;
	cin>>b>>a;
	ll x,y;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);

	string ans="";
	i=a.length()-1,j=b.length()-1;
	// cout<<i<<" "<<j<<endl;
	while(i>=0 && j>=0){
		x = a[i]-'0';
		y = b[j]-'0';
		// cout<<x<<" "<<y<<endl;
		if(x>=y){
			char c = '0';
			c+=(x-y);
			ans=c+ans;
			i--;
			j--;
		}
		else{
			i--;
			if(a[i]!='1'){
				cout<<"-1"<<endl;
				return;
			}
			x+=10;
			char c = '0';
			c+=(x-y);
			ans=c+ans;
			i--;
			j--;	
		}
		if(i<0 && j>=0 || i<j){
			cout<<"-1"<<endl;
			return;
		}
	}
	// cout<<ans<<endl;
	// cout<<i<<endl;
	while(i>=0){
		ans = a[i]+ans;
		i--;
	}
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
	i=0;
	while(ans[i]=='0'){
		i++;
	}
	if(i==ans.length())
		cout<<'0';
	for(;i<ans.length();i++){
		cout<<ans[i];
	}
	cout<<endl;
	// cout<<ans<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
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