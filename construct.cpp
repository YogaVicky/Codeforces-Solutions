#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll j;
		for(j=0;j<5;j++);
		ll n,a,b;
    cin >> n >> a >> b;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string q[a];
    for(int i=0;i<b-1;i++)
        q[i] = s[i];
    for(int i=b-1;i<a;i++)
        q[i] = s[b-1];
    for(int i=0;i<n;i++)
        cout << q[i%a];
    cout << endl;
	}
	return 0;
}