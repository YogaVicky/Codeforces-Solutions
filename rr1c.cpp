#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	string s;
	cin>>s;
	n = s.length();
	stack<char>st;
	for(i=0;i<n;i++){
		if(!st.empty()){
			char a = st.top();
			if(a=='A' && s[i]=='B')
				st.pop();
			else if(a=='B' && s[i]=='B')
				st.pop();
			else
				st.push(s[i]);
		}
		else
			st.push(s[i]);	
	}
	cout<<st.size()<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}