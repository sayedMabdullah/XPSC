/**
 * Title: sayedMabdullah
 * Date: "02-04-2024" Time:"15:36:05"
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

    priority_queue<ll> pq;

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] > 0)
            pq.push(v[i]);
        else if (v[i] == 0)
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
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