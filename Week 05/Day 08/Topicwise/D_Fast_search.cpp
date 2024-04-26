/**
 * Title: sayedMabdullah
 * Date: "26-04-2024" Time:"19:22:48"
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll q;
    cin >> q;

    while (q--)
    {
        // ll ans = 0;

        ll s, e;
        cin >> s >> e;

        ll indxS = lower_bound(a.begin(), a.end(), s) - a.begin();
        ll indxE = upper_bound(a.begin(), a.end(), e) - a.begin();
        // for (int x : a)
        // {
        //     if (x >= s and x <= e)
        //     {
        //         ans++;
        //     }
        // }

        // cout << lower_bound(a.begin(), a.end(), s) - a.begin() << " ";
        // cout << upper_bound(a.begin(), a.end(), e) - a.begin();
        // // cout << *lower_bound(a.begin(), a.end(), e) - a.begin();
        cout << indxE - indxS << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}