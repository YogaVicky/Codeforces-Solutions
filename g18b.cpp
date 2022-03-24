#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
void template_test(){
    ll n,i,j,k,m;
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
    for(i=0;i<1000000;i++);
}
 
int power(int a, int b, int p)
{
    if(a==0)
    return 0;
    int res=1;
 
    if(a>=p)
    a = a%p;
 
    while(b>0)
    {
        if(b&1)
        res=(res*a)%p;
        b>>=1;
        a=(a*a)%p;
    }
    return res;
}
 
 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 
void SeiveOfEratosthenes(int n);

void solve(){
	ll n,l,r,i;
	template_test();
	template_test();
	template_test();
	vector<ll>a(n);
	
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}






