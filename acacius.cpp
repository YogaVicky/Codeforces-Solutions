#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,h;
	cin>>n;
	string s;
	cin>>s;
	string s1 = "abacaba";
	ll m = s1.length();
	ll check=0;
	ll count=0;
	for(i=0;i<n;i++){
		if(s[i]==s1[0]){
			ll k = i;
			for(j=0;j<m;j++){
				if(k>=n)
					break;
				if(s[k]==s1[j]){
					check=0;
					k++;
				}
				else{
					check=1;
					break;
				}
			}
			if(check==0 && j==m){
				// cout<<i<<endl;
				count++;
			}
		}
	}
	if(count>1){
		cout<<"No"<<endl;
		return;
	}
	check=0;
	for(i=0;i<n;i++){
		if(s[i]==s1[0] || s[i]=='?'){
			ll k = i;
			for(j=0;j<m;j++){
				if(k>=n)
					break;
				if(s[k]==s1[j] || s[k]=='?'){
					check=0;
					k++;
				}
				else{
					check=1;
					break;
				}
			}
			k=i;
			if(check==0 && j==m){
				cout<<"Yes"<<endl;
				for(h = 0;h<k;h++){
					if(s[h]=='?')
						cout<<'d';
					else
						cout<<s[h];
				}
				cout<<s1;
				h+=m;
				for(;h<n;h++){
					if(s[h]=='?')
						cout<<'d';
					else
						cout<<s[h];
				}
				cout<<endl;
				break;
			}
		}
	}
	if(check==1)
		cout<<"No"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}





