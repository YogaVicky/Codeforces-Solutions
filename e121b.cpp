#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	string s;
	cin>>s;
	m=0;
	j=-1;
	ans=INT_MIN;
	n=s.length();
	// cout<<n<<endl;
	for(i=n-1;i>0;i--){
		// cout<<s[i]<<" "<<s[i-1]<<endl;
		ans=s[i]-'0'+s[i-1]-'0';
		// cout<<ans<<endl;
		if(ans>9){
			// cout<<ans<<endl;
			check=1;
			char t='0';
			t+=ans/10;
			s[i-1]=t;
			t='0';
			t+=ans%10;
			s[i]=t;
			break;
		}
	}
	if(check){
		cout<<s<<endl;
		return;
	}
	string string2="";
	string2+=s[0]-48+s[1];
	for(i=2;i<n;i++)
		string2+=s[i];
	cout<<string2<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}