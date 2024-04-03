/**
 * Title: sayedMabdullah
 * Date: "03-04-2024" Time:"20:48:48"
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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);

    ll mx = 0, mn = 0, ch = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= l and a[i] <= r)
        {
            ch++;
        }
        else
        {
            ch--;
        }
        mx = max(mx, ch);
        mn = min(mn, ch);
    }

    cout << mx << " " << mn << endl;
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