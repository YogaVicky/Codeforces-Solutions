#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
    ll n,i,j;
    cin>>n; 
    string mat[n];
    for(i=0;i<n;i++){
        cin>>mat[i];
    }
    if (mat[0][1] == '0' && mat[1][0] == '0')
    {
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '0')
        {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '1')
        {
            cout << 0 << endl;
        }
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '1')
        {
            cout << 1 << endl;
            cout << n << " " << n - 1 << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '0')
        {
            cout << 1 << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
    else if (mat[0][1] == '1' && mat[1][0] == '0')
    {
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '0')
        {
            cout << 1 << endl;
            cout << 2 << " " << 1 << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '1')
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '0')
        {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
            cout << 2 << " " << 1 << endl;
        }
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '1')
        {
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
    else if (mat[0][1] == '0' && mat[1][0] == '1')
    {
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '0')
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '1')
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n - 1 << " " << n << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '0')
        {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '1')
        {
            cout << 1 << endl;
            cout << 2 << " " << 1 << endl;
        }
    }
    else
    {
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '0')
        {
            cout << 0 << endl;
        }
        if (mat[n - 1][n - 2] == '0' && mat[n - 2][n - 1] == '1')
        {
            cout << 1 << endl;
            cout << n - 1 << " " << n << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '0')
        {
            cout << 1 << endl;
            cout << n << " " << n - 1 << endl;
        }
        if (mat[n - 1][n - 2] == '1' && mat[n - 2][n - 1] == '1')
        {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}