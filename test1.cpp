#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int rem = n % 10;
        n /= 10;
        int rem2 = n % 10;
        n /= 10;

        int ans = rem + rem2;

        n *= 100;
        n += ans;
        cout << n << endl;
    }
}