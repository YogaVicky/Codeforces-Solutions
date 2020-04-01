#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t,i;
	string s;
	cin>>t;
	cin>>s;
	ll l=0,r=0;
	for(i=0;i<t;i++){
		if(s[i]=='L')
			l++;
		else r++;
	}
	cout<<l+r+1<<endl;
	return 0;
}