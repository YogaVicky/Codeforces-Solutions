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
	ll a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=1 && j!=1)
				cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=1 && j!=1)
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	

	m=0;
	if(a[0][0] - a[0][1] == a[0][1] - a[0][2])
		m++;
	if(a[0][0] - a[1][0] == a[1][0] - a[2][0])
		m++;
	if(a[0][2] - a[1][2] == a[1][2] - a[2][2])
		m++;
	if(a[2][0] - a[2][1] == a[2][1] - a[2][2])
		m++;
	ll s=0;
	ll m1=0;
	ll x = (a[2][2] - a[0][0]);
	if(x%2==0){
		x=x/2;
		m1++;
		if(a[1][0] - x == x - a[1][2])
			m1++;
		if(a[2][0] - x == x - a[0][2])
			m1++;
		if(a[0][1] - x == x - a[2][1])
			m1++;
		if(m1>s)
			s=m1;
	}
	m1=0;
	x = (a[2][0] - a[0][2]);
	if(x%2==0){
		x=x/2;
		m1++;
		if(a[1][0] - x == x - a[1][2])
			m1++;
		if(a[0][0] - x == x - a[2][2])
			m1++;
		if(a[0][1] - x == x - a[2][1])
			m1++;
		if(m1>s)
			s=m1;
	}
	m1=0;
	x = (a[1][0] - a[1][2]);
	if(x%2==0){
		x=x/2;
		m1++;
		if(a[2][0] - x == x - a[0][2])
			m1++;
		if(a[0][0] - x == x - a[2][2])
			m1++;
		if(a[0][1] - x == x - a[2][1])
			m1++;
		if(m1>s)
			s=m1;
	}
	m1=0;
	x = (a[0][1] - a[2][1]);
	if(x%2==0){
		x=x/2;
		m1++;
		if(a[2][0] - x == x - a[0][2])
			m1++;
		if(a[0][0] - x == x - a[2][2])
			m1++;
		if(a[1][0] - x == x - a[1][2])
			m1++;
		if(m1>s)
			s=m1;
	}
	cout<<m+s<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
