#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,m;
	cin>>n>>m;
	ll q = n;
	string a='\0',b;
	while(q--){
		cin>>b;
		a.append(b);
	}
	string c = '\0';
	ll l = strlen(a);
	for(i=0;i<l/2;i++){
		if(a[i]==a[l-i-1])
			c.append(a[i]);
	}
	for(i=0;i<c.strlen(c);i++)
		cout<<c[i];
	for(i=strlen(c)-1;i>=0;i--)
		cout<<c[i];
	return 0;
}