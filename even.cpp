#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string test;
		cin>>test;
		vector<ll>a;
		ll sum = 0,i,b;
		for(i=0;i<n;i++){
			char a1 = test[i];
			// cout<<int(a1)<<endl;
			a.push_back(int(a1)-48);
		}
		// for(i=0;i<n;i++){
		// 	cout<<a[i];
		// 	cout<<endl;
		// }
		for(i=0;i<n;i++){
			sum+=a[i];
		}
		vector<ll>c;
		if(sum%2==0 && a[n-1]%2!=0){
			for(i=0;i<n;i++){
				cout<<a[i];
			}
			cout<<endl;
			continue;
		}
		else{
			ll check = 0,s = 0;
			for(i=n-1;i>=0;i--){
				if(a[i]%2!=0){
					check = 1;
					break;
				}
			}
			ll j,k;
			for(j=0;j<=i;j++){
				s+=a[j];
				c.push_back(a[j]);
			}
			// cout<<i<<endl;
			// for(k=0;k<=i;k++)
			// 	cout<<c[k];
			// cout<<endl;
			k = 0;
			// cout<<s<<endl;
			if(s%2!=0){
				for(k=0;k<=i;k++){
					if(c[k]%2!=0){
						k++;
						check=1;
						break;
					}
				}
			}
			for(;k<=i;k++){
				// cout<<c[k];
				if(c[k]==0)
					continue;
				else
					break;

			}
			// cout<<endl;
			ll f = k;
			if(k<i){
				for(;k<=i;k++)
					cout<<c[k];
			}
			if(check==0 || f>=i)
				cout<<-1;
			cout<<endl;
			continue;
		}
	}
	return 0;
}