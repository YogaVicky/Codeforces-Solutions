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
	vector<ll>a1(n),a2(n);
	vector<ll>s1(n+1),s2(n+1);
	for(i=0;i<n+1;i++){
		s1[i]=0;
		s2[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>a1[i];
	}
	for(i=0;i<n;i++){
		cin>>a2[i];
	}
	sort(a1.begin(),a1.end());
	sort(a2.begin(),a2.end());
	for(i=0;i<n;i++){
		s1[i+1]=s1[i]+a1[i];
	}
	for(i=0;i<n;i++){
		s2[i+1]=s2[i]+a2[i];
	}
	// cout<<s1[n]<<" "<<s1[n/4]<<endl;	
	ll s3=s1[n]-s1[n/4];
	ll s4=s2[n]-s2[n/4];
	vector<ll>b(n/4);
	for(i=0;i<n/4;i++)
		b[i]=a2[i];
	ll ans=0;
	m=n;
	// cout<<s3<<" "<<s4<<endl;
	i=n/4-1;
	while(s3<s4){
		ans++;
		n++;
		s3+=100;
		if(n%4==0){
			s3 = s3 - a1[n/4 -1];
		}
		else{
			if(s4<s2[m]){
				s4+=b[i];
				i--;
			}
			else
				s4=s2[m];
		}
		// cout<<s3<<" "<<s4<<endl;
	}
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
