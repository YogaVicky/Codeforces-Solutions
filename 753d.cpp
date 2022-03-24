#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

	ll t,n,i;
	cin>>t;
	while(t--)
    {
	cin>>n;
    ll x;
    char c='a';
    vector<pair<char,ll>> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(make_pair(c,x));

    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        a[i].first=s[i];
    }
    sort(a.begin(),a.end());
    int flag=0;
    for(int i=0;i<n;i++)
    {   
        //cout<<a[i].second<<" "<<i<<endl;
        if(a[i].first=='B' && a[i].second-(i+1)<0)
        {
            flag=1;
            break;
        }
        else if(a[i].first=='R' && (i+1)-a[i].second<0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";
    
	}
	return 0;
}