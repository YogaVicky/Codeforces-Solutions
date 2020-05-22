#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll check=0,count=0;
	ll l=0,r=n-1,s1=0,s2=0,al=0,bb=0;
	while(1){
		while(s1<=s2){
			s1+=a[l];
			l++;
			if(l>r){
				check=1;
				break;
			}
		}
		al+=s1;
		count++;
		s2 = 0;
		if(check)
			break;
		while(s2<=s1){
			s2+=a[r];
			r--;
			if(l>r){
				check=1;
				break;
			}
		}
		bb+=s2;
		count++;
		s1 = 0;
		if(check)
			break;
	}
	cout<<count<<" "<<al<<" "<<bb<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}