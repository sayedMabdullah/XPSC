/**
 * Title: sayedMabdullah
 * Date: "22-04-2024" Time:"18:14:39"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    ll dis = abs(s[0] - s[n - 1]);
    ll ans = 2;

    vector<pl> ansss;

    for (ll i = 1; i < n - 1; i++)
    {
        ll a = s[i];
        ll st = s[0];
        ll en = s[n - 1];
        if ((a >= st and a <= en) || (a <= st and a >= en))
        {
            // cout << a << " ";
            ansss.push_back({a, i + 1});
            ans++;
        }
    }
    if (int(s[0]) < int(s[n - 1]))
    {
        sort(ansss.begin(), ansss.end());
    }
    else
    {
        sort(ansss.begin(), ansss.end(), greater<pl>());
    }

    cout << dis << " " << ans << endl
         << 1 << " ";
    for (auto x : ansss)
    {
        cout << x.second << " ";
    }
    cout << n << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (ll i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}