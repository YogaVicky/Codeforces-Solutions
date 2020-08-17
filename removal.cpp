#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// void solve(){
// 	ll n,i;
// 	string s;
// 	cin>>s;
// 	ll check=0;
// 	ll a=0,b=0;
// 	for(i=0;i<n;i++){
// 		if(s[i]=='1')
// 			check=1;
// 	}
// 	if(check==0){
// 		cout<<0<<endl;
// 		return;
// 	}
// 	else{
// 		while(check==1){
// 			ll max = 1;
// 			for(i=0;i<n;i++){
// 				if(s[i]=='1'){
// 					ll temp = 1;
// 					for(j=i+1;j<n;j++){
// 						if(s[i]=='1')
// 							temp++;
// 						if(temp>max)
// 							max = temp;
// 					}
// 				}
// 			}
// 			for(i=0;i<n;i++){
// 				if(s[i]=='1'){
// 					ll temp = 1;
// 					for(j=i+1;j<n;j++){
// 						if(s[i]=='1')
// 							temp++;
// 						if(temp>max)
// 							max = temp;
// 					}
// 				}
// 			}
// 		}	
// 	}
// }

void check()
{
	string s;
	ll ans = 0;
	cin >> s;
	ll size = s.size();
	vector<ll> res;
	for(int i=0;i<size;i++) if(s[i]=='1') ans++; else if(ans) res.push_back(ans), ans = 0;
	if(ans) res.push_back(ans);
	sort(res.begin(), res.end());
	reverse(res.begin(), res.end());
	ans = 0;
	for(int i=0;i<res.size();i+=2) ans+=res[i];
	cout << ans << endl;
    return ;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		check();
	}
	return 0;
}