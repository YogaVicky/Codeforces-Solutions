#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	string s;
	cin>>n;
	cin>>s;
	ll check=0;
	for(i=0;i<n;i++){
		ll count1=0,count2=0;
		for(j=i;j<n;j++){
			if(s[j]=='a')
				count1++;
			else
				count2++;
			if(count1==count2){
				check=1;
				break;
			}
		}
		if(check)
			break;
	}
	if(check){
		cout<<i+1<<" "<<j+1<<endl;
	}
	else
		cout<<-1<<" "<<-1<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				
	while(t--){
		solve();
	}
	return 0;
}
