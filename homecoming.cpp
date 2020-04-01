#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,i;
		cin>>a>>b>>c;
		string s;
		cin>>s;
		ll ans = s.length();
		for(i=s.length()-2;i>=0;i--){
			char j = s[i];
			if(j=='A'){
				c-=a;
			}
			else{
				c-=b;		
			}
			if(c<0){
				ans = i+1;
				break;
			}
			while(s[i]==j){
				i--;
			}
			i++;
		}
		if(c>=0)
			ans = 0;
		cout<<ans+1<<endl;		
	}
	return 0;
}