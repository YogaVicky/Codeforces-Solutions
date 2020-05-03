#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		for(i=0;i<10;i++);
		if(n%2==0){
			ll l = n/2 -1,r = n/2;
			while(l>=0&&r<n){
				cout<<a[l]<<" "<<a[r]<<" ";
				l--;
				r++;
			}
		}
		else{
			cout<<a[n/2]<<" ";
			ll l = n/2 -1,r = n/2+1;
			while(l>=0&&r<n){
				cout<<a[l]<<" "<<a[r]<<" ";
				l--;
				r++;
			}	
		}
		cout<<endl;
	}
	return 0;
}