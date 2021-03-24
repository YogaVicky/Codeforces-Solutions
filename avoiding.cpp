#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),neg,pos,zeroes;
	ll p=0,n1=0; 
	ll sum = 0;
	for(i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
		if(a[i] < 0) neg.push_back(a[i]);
		else if(a[i] > 0) pos.push_back(a[i]);
		else zeroes.push_back(0);
	}
	if(sum) {
		cout<<"YES"<<endl;
		if(sum < 0) {
			for(i=0;i<neg.size();i++)
				cout<<neg[i]<<" ";
			for(i=0;i<pos.size();i++)
				cout<<pos[i]<<" ";
			for(i=0;i<zeroes.size();i++)
				cout<<zeroes[i]<<" ";
		}
		else {
			for(i=0;i<pos.size();i++)
				cout<<pos[i]<<" ";
			for(i=0;i<neg.size();i++)
				cout<<neg[i]<<" ";
			for(i=0;i<zeroes.size();i++)
				cout<<zeroes[i]<<" ";	
		}
		cout<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}