#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	ll a[n];
	ll f = 10;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]>a[n-1]){
		for(i=1;i<n;i++){
			if(a[i]>a[0]){
				cout<<-1<<endl;
				return;
			}
		}
		cout<<a[0]<<" ";
		for(i=n-1;i>0;i--)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else{
		for(i=0;i<n-1;i++){
			if(a[n-1]<a[i]){
				cout<<-1<<endl;
				return;
			}
		}
		cout<<a[n-1]<<" ";
		for(i=n-2;i>=0;i--)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);
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