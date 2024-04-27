/**
 * Title: sayedMabdullah
 * Date: "27-04-2024" Time:"13:59:10"
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
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] + i + 1;
    }

    sort(a.begin(), a.end());

    ll sum = 0, ans = 0;

    for (ll x : a)
    {
        sum += x;
        if (sum <= c)
        {
            ans++;
            // sum += x;
            // cout << x << " ";
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    // t = 1;
    in >> t;

    for (ll i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}