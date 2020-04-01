#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int fact(int n); 
  
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
// Returns factorial of n 
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
int main(){
	ll n,k,i;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll sum = 0;
	sort(a.begin(),a.end(),greater<ll>());
	for(i=0;i<k;i++){
		sum+=a[i];
	}
	ll s = n-k;
	ll max1 = max(s,k-1);
	ll min1 = min(s,k-1);

	cout<<sum<<" "<<nCr(max1,min1)%998244353;
	return 0;
}