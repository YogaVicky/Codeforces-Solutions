#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	string s;
	cin>>n>>s;
	vector<pair<ll,ll>>v;
	ll count=0,cur=0;
	queue<ll>q;
	for(i=1;i<n;i++){
		if(s[i]==s[i-1])
			q.push(cur);
		else
			cur++;
	}
	ll score = 0,deleted=0;
	for(int i = 0; i < n; i++)
		{
			if(q.empty())
				break;
			q.pop();
			deleted++;
			score++;
			while(!q.empty() && q.front() == i)
			{
				q.pop();
				deleted++; 	
			}
			deleted++;
			//cerr << deleted << endl;
		}
		score += (n - deleted + 1) / 2;
	cout<<score<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}