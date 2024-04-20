/**
 * Title: sayedMabdullah
 * Date: "20-04-2024" Time:"14:32:33"
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

    vector<ll> a(n);

    ll mn = INT_MAX;
    int neg = 0;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] < 0)
            neg++;
        mn = min(mn, abs(a[i]));
        ans += abs(a[i]);
    }

    if (neg % 2 != 0)
        cout << ans - (mn * 2) << endl;
    else
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