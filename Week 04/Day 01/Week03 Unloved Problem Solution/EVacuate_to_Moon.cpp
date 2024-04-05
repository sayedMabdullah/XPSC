/**
 * Title: sayedMabdullah
 * Date: "05-04-2024" Time:"15:37:48"
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
    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> car(n);
    vector<ll> power_station(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> car[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> power_station[i];
    }

    sort(car.begin(), car.end(), greater<>());
    sort(power_station.begin(), power_station.end(), greater<>());

    ll ans = 0;

    ll len = min(m, n);

    for (int i = 0; i < len; i++)
    {
        if (power_station[i] * h > car[i])
        {
            ans += car[i];
        }
        else
        {
            ans += power_station[i] * h;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}