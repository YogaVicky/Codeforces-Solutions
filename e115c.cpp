#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());
bool CGdoubleHasDecimals(double f) {
    return (f-(int)f != 0);
}
void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	ll tsum=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		tsum+=a[i];
	}
	if(tsum%n!=0){
		cout<<0<<endl;
		return;
	}
	// double check = double(tsum)/double(n);
	// check*=2;
	// // cout<<check<<endl;
	// if(CGdoubleHasDecimals(check)){
	// 	cout<<0<<endl;
	// 	return;
	// }
	ll sum = (tsum/n)*2;
	unordered_map<ll, ll> m;
 
    // Store counts of all elements in map m
    for(i=0;i< n; i++)
        m[a[i]]++;
    ll twice_count = 0;
 
    // iterate through each element and increment the
    // count (Notice that every pair is counted twice)
    for (i = 0; i < n; i++) {
        twice_count += m[sum - a[i]];
 
        // if (a[i], a[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (a[i], a[i])
        // pair is not considered
        if (sum - a[i] == a[i])
            twice_count--;
    }
 
    // return the half of twice_count
    cout<<twice_count / 2<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
