/**
 * Title: sayedMabdullah
 * Date: "02-04-2024" Time:"11:08:53"
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
    vector<ll> v(n);

    map<int, int> cnt;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }

    sort(v.begin(), v.end());

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a = v[i];
        if (cnt[v[i]] != 0)
        {
            ans++;
            while (cnt[a] > 0)
            {
                cnt[a]--;
                a++;
            }
        }
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