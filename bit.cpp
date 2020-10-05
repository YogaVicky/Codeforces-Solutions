#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<ll>a(n+1),b(n+1),c(n+1);
	for(i=0;i<n;i++){
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	ll c3=0,c2=0;
	for(i=0;i<k;i++){
		if(s[i]=='1')
			c3++;
		else if(s[i]=='0')
			c2++;
	}
	ll g=c3-c2;
	for(i=0;i<k-1;i++){
		if(s[i]=='?'){
			if(g<=0){
				s[i]='1';
				g++;
			}
			else{
				s[i]='0';
				g--;	
			}
		}
	}
	for(i=0;i<n;i++){
		a[i+1]=a[i];
		b[i+1]=b[i];
		c[i+1]=c[i];
		if(s[i]=='1')
			a[i+1]++;
		else if(s[i]=='0')
			b[i+1]++;
		else
			c[i+1]++;
	}
	ll a1=0,b1=0,c1=0;
	ll check = 0;
	for(i=k;i<n+1;i++){
		if((a[i]-a[i-k] + a1)==(b[i]-b[i-k] + b1))
			continue;
		else{
			ll m = abs((a[i]-a[i-k] + a1)-(b[i]-b[i-k] + b1));
			if(m <= (c[i]-c[i-k] + c1)){
				c1--;
				if((a[i]-a[i-k] + a1)>(b[i]-b[i-k] + b1)){
					b1++;
				}
				else
					a1++;
			}
			else{
				check=1;
				break;		
			}
		}
	}
	if(check==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}