/**
 * Title: sayedMabdullah
 * Date: "26-04-2024" Time:"20:35:52"
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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<ll>());

    vector<ll> prefex(n + 1);

    for (int i = 1; i <= n; i++)
    {
        prefex[i] = (prefex[i - 1] + a[i - 1]);
    }

    while (q--)
    {
        ll x;
        cin >> x;

        auto it = lower_bound(prefex.begin(), prefex.end(), x);
        if (it != prefex.end())
        {
            cout << it - prefex.begin() << endl;
        }
        else
            cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    // t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}