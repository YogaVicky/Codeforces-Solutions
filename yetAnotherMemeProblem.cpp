#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int countDigit(long long n) 
{ 
    int count = 0,r; 
    while (n != 0) {
   		r =  
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
	int count = 0,r;
	ll check = 1; 
    while (b != 0) {
   		r = b % 10;
   		if(r!=9)
   			check =0; 
        b = b / 10; 
        ++count; 
    }
    if(check==0)
    	cout<<a*(count-1)<<endl;
	else
		cout<<a*(count)<<endl; 		
	}
	return 0;
}