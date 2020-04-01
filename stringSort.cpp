#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		string s;
		cin>>s;
		// char min = s[0];
		// for(i=0;s[i]!='\0';i++){
		// 	if(s[i]<min)
		// 		min = s[i];
		// }
		// ll k;
		// for(i=s.length()-1;i>=0;i--){
		// 	if(s[i]==min){
		// 		cout<<i+1<<endl;
		// 		k = i;
		// 		break;
		// 	}
		// }
		ll j;
		string m = s;
		string m1 = s;
		ll ans = 1;
		ll k;
		for(i=0;i<n;i++){
			m1 = s;
			k = i+1;
			for(j=0;j<n-k+1;j++){
				reverse(m1.begin()+j, m1.begin()+j+k);
			}
			// cout<<m1<<endl;
			if(m1.compare(m)<0){
				ans = k;
				m = m1;
			}
		}
		cout<<m<<endl<<ans<<endl;
	}
	return 0;
}