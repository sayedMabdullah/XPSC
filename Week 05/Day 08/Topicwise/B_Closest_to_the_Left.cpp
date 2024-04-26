/**
 * Title: sayedMabdullah
 * Date: "26-04-2024" Time:"16:20:54"
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(k);
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    for (int x : b)
    {

        ll l = 0, r = n - 1;
        ll ans = -1;

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if (a[mid] <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {

                r = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    // in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}