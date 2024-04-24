/**
 * Title: sayedMabdullah
 * Date: "24-04-2024" Time:"20:53:48"
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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> b;
    bool change = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 4)
        {
            b.push_back(a[i]);
        }
    }

    sort(b.begin(), b.end());
    sort(a.begin(), a.end());

    ll ans = 0;

    if (b.size() <= k)
    {
        for (int x : b)
        {

            ans += 7 - x;
        }
        for (int i = b.size(); i < n; i++)
        {
            ans += a[i];
        }

        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            // cout << b[i] << " ";

            ans += 7 - b[i];
        }
        for (int i = k; i < n; i++)
        {
            ans += a[i];
        }

        cout << ans << endl;
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