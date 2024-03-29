/**
 * Title: sayedMabdullah
 * Date: "29-03-2024" Time:"15:42:02"
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
    vector<ll> a(n + 1);
    vector<ll> prefx(n + 1, 0);
    a[0] = 0;
    prefx[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefx[i] = a[i] + prefx[i - 1];
    }

    while (q--)
    {
        ll s, e, v;
        cin >> s >> e >> v;

        ll ans = prefx[n];                // total sum;
        ll cng = prefx[e] - prefx[s - 1]; // value dlt
        ll add = (e - s + 1) * v;         // value added;
        ll final = ans - cng + add;

        if (final % 2 != 0)
            yes;
        else
            no;
    }
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