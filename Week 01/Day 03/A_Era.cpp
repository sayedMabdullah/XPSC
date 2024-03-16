/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"02:22:14"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        // cout << v[0];
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > (i + 1))
            {
                mx = max(mx, v[i] - (i + 1));
            }
        }

        cout << mx << "\n";
    }

    return 0;
}