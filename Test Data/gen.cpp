#include <bits/stdc++.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const ll MAX = 1e5;

ll randomRange(ll lower, ll upper)
{
	ll num = (rand() % (upper - lower + 1)) + lower;
	return num;
}

string randomChoice(ll probability, ll n)
{
	string res;
	res = to_string(randomRange(1, n));
	return res;
}

int main()
{
	srand(time(0));
	ofstream fout, fin;
	fin.open("input_P(1).in");
	fout.open("output_P(1).out");
	ll t = randomRange(1, 10);
	fin << t << endl;
	while(t--) {
		ll n = randomRange(1, 50);
		fin << n << endl;
		vector<string> a(n);
		for (int i = 0; i < n; i++)
			a[i] = randomChoice(1, 1e10-1);
		for (int i = 0; i < n; i++)
			fin << a[i] << " ";
		fin << endl;
		string s = "";
		for(int i=0;i<n;i++)
			s+=a[i];
		n = s.size();
		ll dp[n + 1][n + 1];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++) {
			dp[i][1] = 1;
		}
		ll zero = 0;
    	for(ll i=2;i<=n;i++){
    	    for(ll j=i-1;j<n;j++){
    	        dp[j-i+1][i]=dp[j-i+1][i-1]+1;
    	        for(ll z=j;z>=j-i+1;z--){
    	            if(s[j]==s[z]){
    	                dp[j-i+1][i]=min(dp[j-i+1][i],dp[j-i+1][z-j+i]+dp[z+1][max(zero,j-1-z)]);
    	            }
    	        }
    	    }
    	}
		fout << dp[0][n] << endl;
	}
	fin.close();
	fout.close();
}