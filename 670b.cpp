#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll p = LLONG_MIN;
	sort(a.begin(),a.end());
	// for(i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	ll q1,q2,q3,q4,q5;
	for(i=0;i<5;i++){
		q1=a[(n-1+i)%n];
		q2=a[(n-2+i)%n];
		q3=a[(n-3+i)%n];
		q4=a[(n-4+i)%n];
		q5=a[(n-5+i)%n];
		p = max(p,q1*q2*q3*q4*q5);
	}
	cout<<p<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;

}