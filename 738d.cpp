#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());
const ll P2LIM = (ll)2e18;
ll lcs(string x, string y, ll n, ll m){
	ll k=0,i;
	ll count=0;
    for(i=0;i<n;i++){
    	if(k==m)
    		break;
    	if(x[i]==y[k]){
    		k++;
    	}
    	else
    		count++;
    }
    count+=m-k;
    count+=n-i;
    return count;
}


void solve(){
	ll n,i,j,k,m;
	string s;
	cin>>s;
	ll h;
	ll mi=INT_MAX;
	for(h=1;h<=P2LIM;h*=2){
		k=h;
		string s1;
		while(k){
			string s2="";
			char c = '0' + k%10;
			s2+=c;
			s1=s2+s1;
			k/=10;
		}
		n=s.length();
		m=s1.length();
		j=lcs(s,s1,n,m);
		mi = min(j,mi);
		// cout<<s1<<" "<<j<<endl;
	}
	cout<<mi<<endl;
}
int main(){
	cout<<P2LIM<<endl;
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
