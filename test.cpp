#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll i;
	for(i=100;i<=200;i++){
		if((i%7)%10 == (i%10)%7)
			cout<<i<<endl;
	}
	return 0;
}