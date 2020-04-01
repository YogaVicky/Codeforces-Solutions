#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	string s;
	ll t,n,count,tcount,check,i;
	cin>>t;
	while(t--){
		count = 0;
		tcount = 0;
		cin>>n;
		cin>>s;
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='A')
				break;
		}
		for(;s[i]!='\0';i++){
			if(s[i]=='P'){
				check = 1;
				tcount++;
			}
			if(s[i]=='A'){
				count = max(count,tcount);
				check = 0;
				tcount = 0;
			}
		}
		count = max(count,tcount);
		cout<<count<<endl;
	}
	return 0;
}