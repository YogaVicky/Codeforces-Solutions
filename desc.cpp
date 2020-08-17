#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sp " "
#define pb push_back
#define mod 1000000007
#define mp make_pair
void check()
{
	ll n, left = 0, right = 1, end, ans = -1;
	cin >> n;
	vector<ll> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	end = n-1;
	while(right<end) {
		if(a[left]+a[right]<=a[end]) {
			ans = left;
			break;
		}
		else {
			++left, ++right;
		}
	}
	if(ans!=-1) {cout << left+1 << sp << right+1 << sp << end+1 << endl;return;}
	cout << -1 << endl;
    return ;
}
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll check = 0;
	for(i=0;i<n-2;i++){
		if(a[i]==a[i+1] && a[i]==a[i+2])
			check=1;
	}
	if(check==1)
		cout<<-1<<endl;
	else
		cout<<1<<" "<<2<<" "<<3<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		check();
	}
	return 0;
}