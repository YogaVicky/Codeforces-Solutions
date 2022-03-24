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
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	ll ans=0;
	//ans=a;
	vector<ll>a;
	ll s1=0,s2=0;
	for(i=0;i<n;i++){
		s1=0;
		s2=0;
		for(j=0;j<s[i].length();j++){
			if(s[i][j]=='a')
				s1++;
			else
				s2++;
		}
		a.pb(s1-s2);
	}
	sort(a.begin(),a.end());
	// for(i=n-1;i>=0;i--)
	// 	cout<<a[i]<<" ";
	// cout<<endl;
	ll temp=0,count=0;
	for(i=n-1;i>=0;i--){
		temp+=a[i];
		if(temp<=0)
			break;
		else
			count++;
	}
	// cout<<count<<endl;
	if(ans<count)
		ans=count;
	//ans=b;
	vector<ll>b;
	for(i=0;i<n;i++){
		s1=0;
		s2=0;
		for(j=0;j<s[i].length();j++){
			if(s[i][j]=='b')
				s1++;
			else
				s2++;
		}
		b.pb(s1-s2);
	}
	sort(b.begin(),b.end());
	temp=0,count=0;
	for(i=n-1;i>=0;i--){
		temp+=b[i];
		if(temp<=0)
			break;
		else
			count++;
	}
	// cout<<count<<endl;
	if(ans<count)
		ans=count;
	//ans=c;
	vector<ll>c;
	for(i=0;i<n;i++){
		s1=0;
		s2=0;
		for(j=0;j<s[i].length();j++){
			if(s[i][j]=='c')
				s1++;
			else
				s2++;
		}
		c.pb(s1-s2);
	}
	sort(c.begin(),c.end());
	temp=0,count=0;
	for(i=n-1;i>=0;i--){
		temp+=c[i];
		if(temp<=0)
			break;
		else
			count++;
	}
	// cout<<count<<endl;
	if(ans<count)
		ans=count;
	//ans=d;
	vector<ll>d;
	for(i=0;i<n;i++){
		s1=0;
		s2=0;
		for(j=0;j<s[i].length();j++){
			if(s[i][j]=='d')
				s1++;
			else
				s2++;
		}
		d.pb(s1-s2);
	}
	sort(d.begin(),d.end());
	temp=0,count=0;
	for(i=n-1;i>=0;i--){
		temp+=d[i];
		if(temp<=0)
			break;
		else
			count++;
	}
	// cout<<count<<endl;
	if(ans<count)
		ans=count;
	
	//ans=e;
	vector<ll>e;
	for(i=0;i<n;i++){
		s1=0;
		s2=0;
		for(j=0;j<s[i].length();j++){
			if(s[i][j]=='e')
				s1++;
			else
				s2++;
		}
		e.pb(s1-s2);
	}
	sort(e.begin(),e.end());
	temp=0,count=0;
	for(i=n-1;i>=0;i--){
		temp+=e[i];
		if(temp<=0)
			break;
		else
			count++;
	}
	// cout<<count<<endl;
	if(ans<count)
		ans=count;
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
