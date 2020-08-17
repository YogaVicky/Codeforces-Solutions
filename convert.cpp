#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll ans = 0;

ll noOf(ll n)
{
    while (n % 8 == 0)
        ans++, n /= 8;
    while (n % 4 == 0)
        ans++, n /= 4;
    while (n % 2 == 0)
        ans++, n /= 2;

    if (n != 1)
        return -1;
    else
        return 1;
}

int main()
{
    ll t,i;
    cin >> t;
    for(i=0;i<10;i++);
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ans = 0;
        if (a % b != 0 && b % a != 0)
            cout << -1 << endl;
        else
        {
            if (noOf(max(a, b) / min(a, b)) == -1)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}