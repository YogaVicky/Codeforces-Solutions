#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)


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

ll rt(ll n){

	ll h = n;
	ll m=0;
	while(h){
		h/=10;
		m++;
	}
	// cout<<m<<endl;
	// j=0;
	ll i;
	ll lc=1;
	for(i=m-1;i>=0;i--){
		

		ll p = pow(10,i);
		ll d = n/p;
		// cout<<d<<endl;
		d%=10;
		// j++;
		// cout<<d<<endl;
		if(d!=0){
			// cout<<"INSIDE"<<endl;
			lc = lcm(d,lc);
			// cout<<lc<<endl;
			if(n%lc!=0){
				n=lc*(n/lc + 1);
				cout<<n<<endl;
				return n;
			}
			// cout<<n<<endl<<"QUIT"<<endl;
		}
	}
	cout<<n<<endl;
	return n;
}


ll che(ll n){
	ll i;
	ll c;
	ll h = n;
	ll m=0;
	ll f;
	ll check=0;
	while(h){
		f = h%10;
		if(f!=0 && n%f!=0){
			check=1;
			break;
		}
		h/=10;
		m++;
	}
	// cout<<check<<endl;
	return check;

}

void solve(){
	ll n,i,j,k;
	cin>>n;

	ll lc=1;

	ll h = n;
	ll m=0;
	while(h){
		h/=10;
		m++;
	}
	ll p = pow(10,18);
	for(i=n;i<=p;i++){
		if(che(i)==0){
			cout<<i<<endl;
			return;
		}
	}
	// j=0;
	// for(i=m-1;i>=0;i--){
	// 	ll p = pow(10,i);
	// 	ll d = n/p;
	// 	// cout<<d<<endl;
	// 	d%=10;
	// 	// j++;
	// 	cout<<d<<endl;
	// 	if(d!=0){
	// 		cout<<"INSIDE"<<endl;
	// 		lc = lcm(d,lc);
	// 		cout<<lc<<endl;
	// 		if(n%lc!=0){
	// 			n=lc*(n/lc + 1);
	// 		}
	// 		cout<<n<<endl<<"QUIT"<<endl;
	// 	}
	// }
	// cout<<n<<endl;
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}