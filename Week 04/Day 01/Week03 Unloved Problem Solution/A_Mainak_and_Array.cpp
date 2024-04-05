/**
 * Title: sayedMabdullah
 * Date: "05-04-2024" Time:"10:07:06"
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
    int n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sort(v.begin(), v.end());
    // cout << v.back() - v.front();
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {

        ll ans = v.back() - v.front();

        // without 1st value check
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i] - v[0]);
        }
        // without last value check
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, v[n - 1] - v[i]);
        }
        // all value check
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i - 1] - v[i]);
        }

        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}