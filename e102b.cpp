#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());


ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve(){
	ll n,i,j,k,m;
	string s1,s2;
	cin>>s1>>s2;
	n=s1.length();
	m=s2.length();
	k = lcm(n,m);
	string t1,t2;
	for(i=0;i<k/n;i++){
		t1+=s1;
	}
	for(i=0;i<k/m;i++){
		t2+=s2;
	}
	if(t1==t2)
		cout<<t1<<endl;
	else
		cout<<-1<<endl;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
