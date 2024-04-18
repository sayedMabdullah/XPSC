/**
 * Title: sayedMabdullah
 * Date: "18-04-2024" Time:"11:46:52"
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
    ll n;
    cin >> n;

    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        // last set bit count;
        mp[__lg(x)]++;
    }

    ll ans = 0;

    for (auto x : mp)
    {
        ans += (x.second * (x.second - 1)) / 2;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}