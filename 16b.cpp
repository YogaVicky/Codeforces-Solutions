#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)


bool cmp(pair<ll, ll>& a, 
         pair<ll, ll>& b) 
{ 
    return a.second > b.second; 
}  
vector<pair<ll, ll> > sort(map<ll,ll>& M) 
{  
    vector<pair<ll, ll> > A;  
    for (auto& it : M) { 
        A.push_back(it); 
    }  
    sort(A.begin(), A.end(), cmp);  
    // for (auto& it : A) { 
    //     cout << it.first << ' '
    //          << it.second << endl; 
    // }
    return A; 
} 




void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	ll count=0;
	vector<pair<ll, ll>>a;
	ll b,c;
	for(i=0;i<m;i++){
		cin>>b>>c;
		a.pb(make_pair(b,c));
	}
	sort(a.begin(), a.end(), cmp);
	for (auto& it : a) { 
        if(n>=it.first){
        	n-=it.first;
      		count+=it.first*it.second;
        }
        else{
        	count+=n*it.second;
        	break;	
        } 
    }
    cout<<count<<endl;
}
int main(){
	ll t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}