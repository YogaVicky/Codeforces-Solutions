#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	vector<ll>a(n);
	vector<ll>b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	ll l = 0,r=n-1;
	ll temp;
	while(k && l<n && r>=0){
		if(a[l]<b[r]){
			temp = a[l]; 
			a[l]=b[r];
			b[r] = temp;
			l++;
			r--;
			k--;
		}
		else{
			break;
		}
	}
	ll sum = 0;
	for(i=0;i<n;i++)
		sum+=a[i];
	cout<<sum<<endl;
}	
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10;i++);
	while(t--){
		solve();
	}
	return 0;
}