#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(countDivisors(n)>=5)
			
	}
	return 0;
}