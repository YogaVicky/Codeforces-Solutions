#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	string s;
	cin>>s;
	n = s.length();
	ll a=0,b=0,c=0;
	for(i=0;i<n;i++){
		if(s[i]=='A')
			a++;
		else if(s[i]=='B')
			b++;
		else
			c++;
	}
	ll check=0;
	if(a==b+c){
		if(s[0]=='A'){
			for(i=0;i<n;i++){
				if(s[i]=='A')
				check++;
			else
				check--;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}
		else{
			for(i=0;i<n;i++){
				if(s[i]=='A')
				check--;
			else
				check++;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}
	}
	else if(b==a+c){
		if(s[0]=='B'){
			for(i=0;i<n;i++){
				if(s[i]=='B')
				check++;
			else
				check--;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}
		else{
			for(i=0;i<n;i++){
				if(s[i]=='B')
				check--;
			else
				check++;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}	
	}
	else if(c==a+b){
		if(s[0]=='C'){
			for(i=0;i<n;i++){
				if(s[i]=='C')
				check++;
			else
				check--;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}
		else{
			for(i=0;i<n;i++){
				if(s[i]=='C')
				check--;
			else
				check++;
			if(check<0){
				cout<<"NO"<<endl;
				return;
			}
			}
			cout<<"YES"<<endl;
		}
	}
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}