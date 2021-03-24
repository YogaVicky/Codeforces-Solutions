#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,ans = 0;
	cin>>n;
	ll tr = 1;
	// while(n){
	// 	if(tr==1){
	// 		if(n==4){
	// 			ans+=3;
	// 			n=0;
	// 		}
	// 		else if(n%2==0 && n%4!=0){
	// 			ans+=n/2;
	// 			n/=2;
	// 		}
	// 		else{
	// 			ans+=1;
	// 			n-=1;
	// 		}
	// 	}
	// 	else{
	// 		if(n%2==0){
	// 			n/=2;
	// 		}
	// 		else{
	// 			n-=1;
	// 		}	
	// 	}
	// 	tr=abs(1-tr);
	// }
	// ll ans = 0,tr = 1,n;
	// cin>>n;
	while(n>0){
		if(n == 4){
			if(tr){
				ans += 3;	
			}else{
				ans += 1;
			}
			n = 0;
		}
		else{
			if(n%2 == 1){
				if(tr){
					ans++;
				}
				n--;
			}
			else{
				if(!(n%4==0)){
					if(tr){
						ans += (n/2);	
					}
					n /= 2;
				}
				else{
					if(tr){
						ans++;	
					}
					n--;
				}
			}
		}
		tr = abs(1-tr);
	}
	cout<<ans<<endl;
}
void test(){
	int n;
	cin>>n;
	int cnt = 0,trn = 1;
	while(n>0){
		if(n == 4){
			if(trn){
				cnt += 3;	
			}else{
				cnt += 1;
			}
			n = 0;
		}else{
			if(n%2 == 1){
				if(trn){
					cnt++;
				}
				n--;
			}else{
				if((n/2)%2 == 1){
					if(trn){
						cnt += (n/2);	
					}
					n /= 2;
				}else{
					if(trn){
						cnt++;	
					}
					n--;
				}
			}

		}
		trn = abs(1-trn);
	}
	cout<<cnt<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}