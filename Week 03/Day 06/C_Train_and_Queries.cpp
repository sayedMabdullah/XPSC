/**
 * Title: sayedMabdullah
 * Date: "03-04-2024" Time:"13:59:26"
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
    vector<ll> v(n);
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        mp[v[i]].push_back(i);
    }

    while (q--)
    {
        ll s, e;
        cin >> s >> e;

        auto fnds = mp.find(s);
        auto fnde = mp.find(e);

        if (fnds != mp.end() and fnde != mp.end())
        {
            ll smin = mp[s].front();
            ll emax = mp[e].back();
            if (smin < emax)
                yes;
            else
                no;
        }
        else
        {
            no;
        }
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