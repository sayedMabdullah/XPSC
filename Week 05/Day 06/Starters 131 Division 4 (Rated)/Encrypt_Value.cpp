/**
 * Title: sayedMabdullah
 * Date: "24-04-2024" Time:"21:30:26"
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
int const M = 1e9 + 7;
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

    ll ans = a[0];

    for (int i = 1; i < n; i++)
    {
        if (ans * a[i] >= ans + a[i])
        {
            ans *= a[i];
            ans = ans % M;
        }
        else
        {
            ans += a[i];
            ans = ans % M;
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