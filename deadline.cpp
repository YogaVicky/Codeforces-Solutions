#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main(){
	// cout<<ceil(11/3)<<endl;
	ll t;
	cin>>t;
	while(t--){
		float n ,d;
		cin>>n>>d;
		float i,check=0;

		for(i=0;i<=n;i++){
			if(i+ceil(d/(i+1))<=n){
				// cout<<i<<endl;
				check = 1;
				break;
			}
		}
		if(check==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}