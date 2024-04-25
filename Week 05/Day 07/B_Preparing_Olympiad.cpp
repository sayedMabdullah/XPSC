/**
 * Title: sayedMabdullah
 * Date: "25-04-2024" Time:"21:40:04"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // print sub sequence
    ll ans = 0;
    for (int i = 1; i < (1 << n); i++)
    {
        ll sum = 0;
        vector<ll> b;
        ll mx = INT_MIN, mn = INT_MAX;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                b.push_back(a[k]);
                sum += a[k];

                mx = max(mx, a[k]);
                mn = min(mn, a[k]);

                // cout << a[k] << " ";
            }
        }

        if ((b.size() >= 2) and (sum >= l) and (sum <= r) and ((mx - mn) >= x))
        {
            // for (int x : b)
            // {
            //     cout << x << " ";
            // }
            // cout << mx << " " << mn << endl;
            // cout << sum;
            ans++;
        }

        sum = 0;
        mx = INT_MIN, mn = INT_MAX;
        b.clear();
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}