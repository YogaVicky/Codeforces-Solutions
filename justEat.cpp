#include <bits/stdc++.h>
using namespace std;
#define finish(x) return cout << x << endl, 0
#define ll long long

int n;
vector <int> a;

bool solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
}