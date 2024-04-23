/**
 * Title: sayedMabdullah
 * Date: "23-04-2024" Time:"21:33:43"
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
    ll n, k, l;
    cin >> n >> k >> l;
    // cout << n << " " << k << " " << l << endl;

    vector<ll> x;
    // cout << n;
    for (int i = 0; i < n; i++)
    {
        ll m, lan;
        cin >> m >> lan;

        if (l == lan)
        {
            // cout << lan << endl;
            x.push_back(m);
        }
    }
    if (x.size() < k)
    {
        cout << -1 << endl;
        return;
    }

    sort(x.begin(), x.end(), greater<ll>());
    ll ans = 0;

    for (int i = 0; i < k; i++)
    {
        // cout << x[i] << endl;
        ans += x[i];
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}