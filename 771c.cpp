#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

const int large = 1e5 + 11;



int check(int x, int y)
{
    if(x < 2  y < 2  x > n || y > m)return -1;
    int tmp = a[x][y] | a[x-1][y] | a[x][y-1] | a[x-1][y-1];
    if(a[x][y] && a[x][y] != tmp)return -1;
    if(a[x-1][y] && a[x-1][y] != tmp)return -1;
    if(a[x][y-1] && a[x][y-1] != tmp)return -1;
    if(a[x-1][y-1] && a[x-1][y-1] != tmp)return -1;
    return tmp;
}

void solve(){
	int m, n, k, a[1008][1008];
	bool ck[1008][1008];
	stack<pair<int,int>>s;
	struct paint{
	    int x, y, col;
	};
	stack<paint>ans;
	pair<int,int> tmp, tam;
	memset(ck, 0, sizeof(ck));
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
            if(check(i, j) != -1)
            {
                s.push({i, j});
                ck[i][j] = true;
                ans.push({i-1, j-1, a[i][j]});
            }
        }
    while(!s.empty())
    {
        tam = s.top();
        s.pop();
        a[tam.fi][tam.se] = a[tam.fi-1][tam.se-1] = a[tam.fi-1][tam.se] = a[tam.fi][tam.se-1] = 0;
        for(int c = 0; c < 8; c++)
        {
            tmp = {tam.fi+h1[c], tam.se+h2[c]};
            if(!ck[tmp.fi][tmp.se] && check(tmp.fi, tmp.se) != -1)
            {
                ck[tmp.fi][tmp.se] = true;
                s.push(tmp);
                ans.push({tmp.fi-1, tmp.se-1, check(tmp.fi, tmp.se)});
            }
        }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(a[i][j])
            {
                cout<<-1;
                return;
            }
    cout<<ans.size()<<'\n';
    while(!ans.empty())
    {
        cout<<ans.top().x<<' '<<ans.top().y<<' '<<ans.top().col<<'\n';
        ans.pop();
    }
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
