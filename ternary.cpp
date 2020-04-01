#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		string a="\0",b="\0";
		string s;
		cin>>s;
		ll check = 1;
		for(i=0;i<n;i++){
			if(s[i]=='2' && check){
				a+='1';
				b+='1';
			}
			else if(s[i]=='1' && check){
				a+='1';
				b+='0';
				check=0;	
			}
			else if(s[i]=='0' && check){
				a+='0';
				b+='0';
			}
			else{
				a+='0';
				b+=s[i];	
			}
		}
		cout<<a<<endl<<b<<endl;
	}
	return 0;
}