/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"03:15:13"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, s, c = 0;
    cin >> k >> s;

    for (ll i = 0; i <= k; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            ll l = s - i - j;
            if (l >= 0 and l <= k)
                c++;
        }
    }

    cout << c << "\n";

    return 0;
}