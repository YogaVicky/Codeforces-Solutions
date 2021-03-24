#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
#include <iomanip> 
// for(i=0;i<n;i++)/
// for(auto it = m.begin();it!=m.end();it++)


double squareRoot(ll number, ll precision) 
{ 
    ll start = 0, end = number; 
    ll mid; 
  
    // variable to store the answer 
    double ans; 
  
    // for computing llegral part 
    // of square root of number 
    while (start <= end) { 
        mid = (start + end) / 2; 
        if (mid * mid == number) { 
            ans = mid; 
            break; 
        } 
  
        // incrementing start if llegral 
        // part lies on right side of the mid 
        if (mid * mid < number) { 
            start = mid + 1; 
            ans = mid; 
        } 
  
        // decrementing end if llegral part 
        // lies on the left side of the mid 
        else { 
            end = mid - 1; 
        } 
    } 
  
    // For computing the fractional part 
    // of square root upto given precision 
    double increment = 0.1; 
    for (ll i = 0; i < precision; i++) { 
        while (ans * ans <= number) { 
            ans += increment; 
        } 
  
        // loop terminates when ans * ans > number 
        ans = ans - increment; 
        increment = increment / 10; 
    }
    cout<<ans<<endl; 
    return ans; 
} 

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a,b;
	ll x,y;
	for(i=0;i<2*n;i++){
		cin>>x>>y;
		if(x==0){
			b.pb(abs(y));
		}
		else{
			a.pb(abs(x));
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	double ans = 0;
	for(i=0;i<n;i++){
		ans+=sqrt(a[i]*a[i] + b[i]*b[i]);
	}
	cout<<fixed<<setprecision(15)<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}