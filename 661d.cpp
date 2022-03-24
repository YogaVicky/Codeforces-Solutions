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
	cin>>n;
	vector<string>a(n);
	for(i=0;i<n-2;i++)
		cin>>a[i];
	if(n==3){
		string temp=a[0];
		temp+="a";
		cout<<temp<<endl;
		return;
	}
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);

						for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);
	string ans="";
	for(i=0;i<n;i++){
		ans+=a[i];
	}
	string check="";
	check+=ans[0];
	for(i=1;i<ans.length()-1;i++){
		if(ans[i]==ans[i+1]){
			check+=ans[i];
			i++;
		}
		else{
			check+=ans[i];
			check+=ans[i+1];
			i++;
		}
	}
	if(i!=ans.length())
		check+=ans[ans.length()-1];
	if(check.length()==n)
		cout<<check<<endl;
	else{
		check+='a';
		cout<<check<<endl;
	}
}
int main(){

	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);
						for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);


	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}