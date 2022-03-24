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
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);for(i=0;i<1000000;i++);
	ll check=1;
	string t1,t2;
	for(i=0;i<n;i++){
		t1+='0';
		t2+='0';
	}
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
	i=0,j=0;
	while(1){
		if(j==n-1)
			break;
		if(i==0){
			t1[j]='1';
			if(s1[j+1]!='1' && t1[j+1]!='1')
				j++;
			else if(s2[j+1]!='1' && t2[j+1]!='1'){
				i=1;
				j++;
			}
			else if(s2[j]!='1' && t2[j]!='1'){
				i=1;
			}
			else{
				check=0;
				break;
			}
		}
		else{
			t2[j]='1';
			if(s2[j+1]!='1' && t2[j+1]!='1')
				j++;
			else if(s1[j+1]!='1' && t1[j+1]!='1'){
				i=0;
				j++;
			}
			else if(s1[j]!='1' && t1[j]!='1'){
				i=0;
			}
			else{
				check=0;
				break;
			}
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
	while(t--){
		solve();
	}
	return 0;
}
